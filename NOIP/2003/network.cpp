#include <cstdio>
inline int max(int a, int b) { return a > b ? a : b; }
typedef struct Edge
{
    int from, to, weight;
    Edge* next;
    Edge(int f, int t, int w, Edge* n) :from(f), to(t), weight(w), next(n) {}
}*lpEdge;
lpEdge G[3000];
#define addEdge(x,y,z) G[x] = new Edge((x), (y), (z), G[(x)]);
bool notend[3000], vis[3000];
int n, p, u[3000], a[3000];
int dfs(int id)
{
    if (vis[id]) return a[id];
    else
    {
        vis[id] = true;
        int ans = 0;
        for (lpEdge cur = G[id]; cur; cur = cur->next)
            ans += cur->weight*max(dfs(cur->to), 0);
        ans -= u[id];
        return a[id] = ans;
    }
}
int main()
{
    scanf("%d%d", &n, &p);
    for (int i = 1; i <= n; i++) scanf("%d%d", a + i, u + i);
    for (int i = 1; i <= n; i++) vis[i] = a[i];
    for (int i = 0, x, y, z; i < p; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        addEdge(y, x, z);
        notend[x] = true;
    }
    for (int i = 1; i <= n; i++) if (!notend[i]) dfs(i);
    bool flag = true;
    for (int i = 1; i <= n; i++) if (!notend[i]) if (a[i] > 0) printf("%d %d\n", i, a[i]), flag = false;
    if (flag) puts("NULL");
    return 0;
}