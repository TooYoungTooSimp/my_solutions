#include <cstdio>
#include <cstring>
inline int min(int a, int b) { return a < b ? a : b; }
const int inf = 0x3f3f3f3f;
int adj[205], nxt[405], to[405], cap[405], cur[205], dis[405], ecnt;
inline void addEdge_impl_(int f, int t, int c)
{
    nxt[ecnt] = adj[f];
    adj[f] = ecnt;
    to[ecnt] = t;
    cap[ecnt] = c;
    ecnt++;
}
inline void addEdge(int f, int t, int c)
{
    addEdge_impl_(f, t, c);
    addEdge_impl_(t, f, 0);
}
int n, m;
bool bfs()
{
    static int que[205];
    for (int i = 1; i <= n; i++)
        cur[i] = adj[i], dis[i] = inf;
    int len = dis[1] = 0;
    que[len++] = 1;
    for (int i = 0; i < len; i++)
        for (int e = adj[que[i]]; ~e; e = nxt[e])
            if (cap[e] && dis[to[e]] > dis[que[i]] + 1)
                dis[que[len++] = to[e]] = dis[que[i]] + 1;
    return dis[n] < inf;
}
int dinic(const int u, const int flow)
{
    if (u == n)
        return flow;
    int res = 0;
    for (int e = cur[u], curFlow; ~e; e = nxt[e])
        if (cap[e] && dis[u] == dis[to[e]] - 1)
            if (curFlow = dinic(to[e], min(cap[e], flow - res)))
                res += curFlow, cap[e] -= curFlow, cap[e ^ 1] += curFlow, cur[u] = e;
    if (res != flow)
        dis[u] = inf;
    return res;
}
int main()
{
    while (~scanf("%d%d", &m, &n))
    {
        ecnt = 0;
        memset(adj, -1, sizeof(adj));
        for (int i = 0, x, y, z; i < m; i++)
            scanf("%d%d%d", &x, &y, &z), addEdge(x, y, z);
        int ans = 0;
        while (bfs())
            ans += dinic(1, inf);
        printf("%d\n", ans);
    }
    return 0;
}