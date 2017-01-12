#include <cstdio>
#include <cstring>
inline int abs(int x) { return x < 0 ? -x : x; }
inline int min(int a, int b) { return a < b ? a : b; }
const int inf = 0x3f3f3f3f, maxn = 210, maxm = maxn * maxn;
int head[maxn], next[maxm], to[maxm], cap[maxm], cost[maxm], ecnt;
int dis[maxn], fa[maxn], que[maxm], cur[maxn];
bool inq[maxn];
inline void addEdge_impl_(int f, int t, int c, int v)
{
    next[ecnt] = head[f];
    head[f] = ecnt;
    to[ecnt] = t;
    cap[ecnt] = c;
    cost[ecnt] = v;
    ecnt++;
}
inline void addEdge(int f, int t, int c, int v)
{
    addEdge_impl_(f, t, c, v);
    addEdge_impl_(t, f, 0, -v);
}
bool MCMF(int s, int e, int &c, int &v)
{
    memset(inq, 0, sizeof(inq));
    memset(dis, inf, sizeof(dis));
    int h = 0, t = 0, x;
    cur[s] = inf;
    inq[s] = true;
    que[t++] = s;
    dis[s] = 0;
    for (; h != t; inq[que[h++]] = false)
        for (int i = head[x = que[h]]; ~i; i = next[i])
            if (cap[i] > 0 && dis[to[i]] > dis[x] + cost[i])
            {
                dis[to[i]] = dis[x] + cost[i];
                cur[to[i]] = min(cap[i], cur[x]);
                fa[to[i]] = i;
                if (!inq[to[i]]) inq[que[t++] = to[i]] = true;
            }
    if (dis[e] == inf) return false;
    c += cur[e], v += cur[e] * dis[e];
    for (int i = e; i != s; i = to[fa[i] ^ 1])
        cap[fa[i]] -= cur[e], cap[fa[i] ^ 1] += cur[e];
    return true;
}
int M[maxn][2], mcnt, H[maxn][2], hcnt;
char buf[maxn];
int main()
{
    int n, m;
    while (~scanf("%d%d\n", &n, &m))
    {
        if (n == 0 && m == 0) break;
        memset(head, -1, sizeof(head));
        ecnt = mcnt = hcnt = 0;
        for (int i = 0, j; i < n; i++)
            for (j = 0, fgets(buf, 111, stdin); j < m; j++)
            {
                if (buf[j] == 'm') mcnt++, M[mcnt][0] = i, M[mcnt][1] = j;
                if (buf[j] == 'H') hcnt++, H[hcnt][0] = i, H[hcnt][1] = j;
            }
        int S = 0, T = mcnt + hcnt + 2, C = 0, F = 0;
        for (int i = 1; i <= mcnt; i++) addEdge(S, i, 1, 0);
        for (int i = 1; i <= hcnt; i++) addEdge(mcnt + i, T, 1, 0);
        for (int i = 1; i <= mcnt; i++)
            for (int j = 1; j <= hcnt; j++)
                addEdge(i, mcnt + j, 1, abs(M[i][0] - H[j][0]) + abs(M[i][1] - H[j][1]));
        while (MCMF(S, T, F, C))
            ;
        printf("%d\n", C);
    }
    return 0;
}