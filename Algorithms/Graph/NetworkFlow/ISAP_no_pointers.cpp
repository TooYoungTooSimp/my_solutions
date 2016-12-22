#include <cstdio>
#include <cstring>
inline int min(int a, int b) { return a < b ? a : b; }
const int maxn = 210;
int head[maxn], to[maxn << 1], cap[maxn << 1], next[maxn << 1], ecnt, m, n;
int d[maxn], que[maxn], cur[maxn], num[maxn], fa[maxn];
inline void addEdge(int f, int t, int c)
{
    next[ecnt] = head[f];
    head[f] = ecnt;
    to[ecnt] = t;
    cap[ecnt] = c;
    ecnt++;
}
int ISAP(int s, int e)
{
    int flow = 0;
    int h = 0, t = 0, x;
    for (int i = 1; i <= n; i++) d[i] = n;
    d[que[t++] = e] = 0;
    while (h != t) for (int i = head[x = que[h++]]; i; i = next[i])
        if (cap[i ^ 1] > 0 && d[to[i]] > d[x] + 1)
            d[que[t++] = to[i]] = d[x] + 1;
    memset(num, 0, sizeof(num));
    for (int i = 1; i <= n; i++) num[d[i]]++, cur[i] = head[i];
    x = s;
    while (d[s] < n)
    {
        if (x == e)
        {
            int curFlow = 0x3f3f3f3f;
            for (x = e; x != s; x = to[fa[x] ^ 1])
                curFlow = min(curFlow, cap[fa[x]]);
            for (x = e; x != s; x = to[fa[x] ^ 1])
                cap[fa[x]] -= curFlow, cap[fa[x] ^ 1] += curFlow;
            flow += curFlow;
            x = s;
        }
        bool needRetreat = true;
        for (int i = cur[x]; needRetreat && ~i; i = next[i])
            if (cap[i] && d[to[i]] == d[x] - 1)
                needRetreat = false, cur[x] = i, fa[x = to[i]] = i;
        if (needRetreat)
        {
            int mn = n - 1;
            for (int i = head[x]; ~i; i = next[i])
                if (cap[i]) mn = min(mn, d[to[i]]);
            if (--num[d[x]] == 0) break;
            num[d[x] = mn + 1]++;
            cur[x] = head[x];
            if (x != s) x = to[fa[x] ^ 1];
        }
    }
    return flow;
}
int main()
{
    while (~scanf("%d%d", &m, &n))
    {
        memset(head, -1, sizeof(head));
        ecnt = 0;
        for (int i = 0, x, y, z; i < m; i++)
        {
            scanf("%d%d%d", &x, &y, &z);
            addEdge(x, y, z);
            addEdge(y, x, 0);
        }
        printf("%d\n", ISAP(1, n));
    }
    return 0;
}
