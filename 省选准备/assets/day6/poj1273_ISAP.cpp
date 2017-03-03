#include <cstdio>
#include <cctype>
#include <cstring>
inline int min(int a, int b) { return a < b ? a : b; }
inline void read(int &x)
{
    int ch = x = 0;
    while (!isdigit(ch = getchar()));
    for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
}
const int N = 205, inf = 0x3f3f3f3f;
int adj[N], nxt[N << 1], to[N << 1], cap[N << 1], cur[N], cnt[N], dis[N], fa[N], ecnt;
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
int ISAP(int S, int T)
{
    int flow = 0;
    for (int i = 0; i < N; i++) dis[i] = N - 1;
    int len = 0, x;
    static int que[N];
    dis[que[len++] = T] = 0;
    for (int i = 0; i < len; i++)
        for (int e = adj[x = que[i]]; ~e; e = nxt[e])
            if (cap[e ^ 1] && dis[to[e]] > dis[x] + 1)
                dis[que[len++] = to[e]] = dis[x] + 1;
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < N; i++) cur[i] = adj[i], cnt[dis[i]]++;
    x = S;
    while (dis[S] < N - 1)
    {
        if (x == T)
        {
            int curFlow = inf;
            for (x = T; x != S; x = to[fa[x] ^ 1]) curFlow = min(curFlow, cap[fa[x]]);
            for (x = T; x != S; x = to[fa[x] ^ 1]) cap[fa[x]] -= curFlow, cap[fa[x] ^ 1] += curFlow;
            flow += curFlow, x = S;
        }
        bool needRetreat = true;
        for (int e = cur[x]; needRetreat && ~e; e = nxt[e])
            if (cap[e] && dis[x] == dis[to[e]] + 1)
                needRetreat = false, cur[x] = e, fa[x = to[e]] = e;
        if (needRetreat)
        {
            int nd = N - 2;
            for (int e = adj[x]; ~e; e = nxt[e])
                if (cap[e]) nd = min(nd, dis[to[e]]);
            if (--cnt[dis[x]] == 0) break;
            ++cnt[dis[x] = nd + 1];
            cur[x] = adj[x];
            if (x != S) x = to[fa[x] ^ 1];
        }
    }
    return flow;
}
int main()
{
    int n, m;
    while (~scanf("%d%d", &m, &n))
    {
        memset(adj, -1, sizeof(adj)), ecnt = 0;
        for (int i = 0, x, y, z; i < m; i++)
            scanf("%d%d%d", &x, &y, &z), addEdge(x, y, z);
        printf("%d\n", ISAP(1, n));
    }
}