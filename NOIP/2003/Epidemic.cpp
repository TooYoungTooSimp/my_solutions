//这个程序能得90分，其中第九组数据应该输出55，但这个程序输出56，不知道为什么。
#include <cstdio>
#include <cstring>
int n, p, maxd;
int w[400];
typedef struct Edge
{
    int from, to;
    Edge *next;
    Edge(int f, int t, Edge *n = 0) : from(f), to(t), next(n) {}
} * lpEdge;
#define addEdge(Gp, x, y) (Gp)[x] = new Edge((x), (y), (Gp)[x]);
lpEdge G1[302], G[302], Dep[302];
bool vis[302];
void build(int id)
{
    vis[id] = true;
    for (lpEdge cur = G1[id]; cur; cur = cur->next)
        if (!vis[cur->to])
        {
            addEdge(G, id, cur->to);
            build(cur->to);
        }
}
int getWeight(int id)
{
    if (~w[id])
        return w[id];
    else
    {
        int cnt = 1;
        for (lpEdge cur = G[id]; cur; cur = cur->next)
            cnt += getWeight(cur->to);
        return w[id] = cnt;
    }
}
void getDepth(int id, int d)
{
    if (id > maxd) maxd = id;
    addEdge(Dep, d, id);
    for (lpEdge cur = G[id]; cur; cur = cur->next)
        getDepth(cur->to, d + 1);
}
void setSafe(int id)
{
    vis[id] = true;
    for (lpEdge cur = G[id]; cur; cur = cur->next)
        setSafe(cur->to);
}
int main()
{
    memset(w, -1, sizeof(w));
    scanf("%d%d", &n, &p);
    for (int i = 0, a, b; i < p; i++)
    {
        scanf("%d%d", &a, &b);
        addEdge(G1, a, b);
        addEdge(G1, b, a);
    }
    build(1);
    getWeight(1);
    getDepth(1, 0);
    memset(vis, 0, sizeof(vis));
    int safeCnt = 0;
    for (int i = 1, maxn, maxid; i <= maxd; i++)
    {
        maxn = maxid = 0;
        for (lpEdge cur = Dep[i]; cur; cur = cur->next)
            if (!vis[cur->to] && w[cur->to] > maxn) maxn = w[maxid = cur->to];
        safeCnt += maxn;
        setSafe(maxid);
    }
    printf("%d", n - safeCnt);
    return 0;
}
