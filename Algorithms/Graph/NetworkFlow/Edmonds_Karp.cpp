#include <cstdio>
#include <cstring>
inline int min(int _a, int _b) { return (_a < _b ? _a : _b); }
const int maxn = 201;
int G[maxn][maxn], m, n;
bool vis[maxn];
int que[maxn], fa[maxn];
int Edmonds_Karp(int s, int e)
{
    int curFlow = 1 << 30, ans = 0;
    do
    {
        memset(vis, 0, sizeof(vis));
        memset(fa, 0, sizeof(fa));
        int head = 0, tail = 0, cur;
        curFlow = 1 << 30;
        que[tail++] = s;
        vis[s] = true;
        while (head < tail)
        {
            cur = que[head++];
            if (cur == e) break;
            for (int i = 1; i <= n; i++)
                if (G[cur][i] && !vis[i])
                    que[tail++] = i, fa[i] = cur, vis[i] = true;
        }
        cur = e;
        while (fa[cur]) curFlow = min(G[fa[cur]][cur], curFlow), cur = fa[cur];
        cur = e;
        while (fa[cur]) G[fa[cur]][cur] -= curFlow, G[cur][fa[cur]] += curFlow, cur = fa[cur];
        if (curFlow == 1 << 30) curFlow = 0;
        ans += curFlow;
    } while (curFlow);
    return ans;
}
int main()
{
    while (~scanf("%d%d", &m, &n))
    {
        memset(G, 0, sizeof(G));
        for (int i = 0, s, e, c; i < m; i++)
        {
            scanf("%d%d%d", &s, &e, &c);
            G[s][e] += c;
        }
        printf("%d\n", Edmonds_Karp(1, n));
    }
    return 0;
}
