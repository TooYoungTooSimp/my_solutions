#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct Edge
{
    int from, to, len;
    Edge* next;
    Edge(int f, int t, int l, Edge* n) :from(f), to(t), len(l), next(n) {}
}*lpEdge;
lpEdge G[400];
#define addEdge(x,y,z) G[(x)]=new Edge((x),(y),(z),G[(x)])
int n, s;
int que[10000], dep[10000], fa[10000], mx[10000], dis[10000], head, tail;
bool vis[10000];
int main()
{
    scanf("%d%d", &n, &s);
    for (int i = 1, x, y, z; i < n; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        addEdge(x, y, z);
        addEdge(y, x, z);
    }
    int x = 0;
    while (G[x] == 0) x++;
    memset(que, 0, sizeof(que));
    memset(dep, 0, sizeof(dep));
    memset(vis, 0, sizeof(vis));
    head = tail = 0;
    que[tail++] = x;
    while (head < tail)
        for (lpEdge cur = G[x = que[head++]]; cur; cur = cur->next)
            if (!vis[cur->to])
                dep[que[tail++] = cur->to] = dep[x] + cur->len, vis[cur->to] = true;
    x = max_element(dep, dep + n + 1) - dep;
    memset(que, 0, sizeof(que));
    memset(dep, 0, sizeof(dep));
    memset(vis, 0, sizeof(vis));
    memset(fa, 0, sizeof(fa));
    head = tail = 0;
    vis[que[tail++] = x] = true;
    while (head < tail)
        for (lpEdge cur = G[x = que[head++]]; cur; cur = cur->next)
            if (!vis[cur->to])
                dep[que[tail++] = cur->to] = dep[fa[cur->to] = x] + cur->len, vis[cur->to] = true;
    x = max_element(dep, dep + n + 1) - dep;
    memcpy(dis, dep, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    for (int t = x; t; t = fa[t]) vis[t] = true;
    for (int t = x; t; t = fa[t])
    {
        memset(que, 0, sizeof(que));
        memset(dep, 0, sizeof(dep));
        head = tail = 0;
        que[tail++] = t;
        int p;
        while (head < tail)
            for (lpEdge cur = G[p = que[head++]]; cur; cur = cur->next)
                if (!vis[cur->to] && dep[cur->to] == 0)
                    mx[t] = max(mx[t], dep[que[tail++] = cur->to] = dep[p] + cur->len);
    }
    //NOIP2007data
    int mmin = 0x3f3f3f3f;
    for (int i = x; i; i = fa[i])
        for (int j = x; j != fa[i]; j = fa[j])
            if (dis[j] - dis[i] <= s)
            {
                int mmax = max(dis[i],dis[x]-dis[j]);
                for (int k = j; k != fa[i]; k = fa[k])
                    mmax = max(mmax, mx[k]);
                if(mmax) mmin = min(mmin, mmax);
            }
    printf("%d", mmin);
    //TODO:BZOJ1999data
    return 0;
}
