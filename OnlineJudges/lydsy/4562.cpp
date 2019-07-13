#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 50, M = 2e5 + 50;
int adj[N], nxt[M], to[M], ecnt;
int I[N], O[N], F[N];
inline void addEdge(int f, int t)
{
    ecnt++;
    nxt[ecnt] = adj[f];
    adj[f] = ecnt;
    to[ecnt] = t;
}
int dfs(int x)
{
    if (F[x]) return F[x];
    int ans = I[x] && !O[x];
    for (int e = adj[x]; e; e = nxt[e])
        ans += dfs(to[e]);
    return F[x] = ans;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0, u, v; i < m; i++)
    {
        scanf("%d%d", &u, &v);
        addEdge(u, v);
        O[u]++, I[v]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (!I[i]) ans += dfs(i);
    printf("%d", ans);
    return 0;
}