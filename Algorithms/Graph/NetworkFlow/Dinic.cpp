#include <cstdio>
#include <cstring>
const int maxn = 201, inf = 0x3f3f3f3f;
inline int min(int a, int b) { return (a < b ? a : b); }
struct Edge
{
    int from, to, cap;
    Edge *next, *rev;
    Edge(int f, int t, int c) :from(f), to(t), cap(c), next(0), rev(0) {};
};
typedef Edge* lpEdge;
lpEdge addEdge(lpEdge* G, int from, int to, int cap)
{
    lpEdge newEdge = new Edge(from, to, cap);
    if (G[from])
        newEdge->next = G[from];
    G[from] = newEdge;
    return newEdge;
}
lpEdge G[maxn], cur[maxn];
int que[maxn], depth[maxn];
int m, n, target;
bool getDepth(int s, int e)
{
    memset(depth, inf, sizeof(depth));
    int head = 0, tail = 0, x;
    que[tail++] = s;
    depth[s] = 0;
    while (head < tail)
    {
        x = que[head++];
        if (x == e)
            return true;
        for (lpEdge i = G[x]; i; i = i->next)
            if (i->cap && depth[i->to] == inf)
                que[tail++] = i->to, depth[i->to] = depth[x] + 1;
    }
    return false;
}
int dfs(int x, int minFlow)
{
    if (x == target || minFlow == 0) return minFlow;
    int flow = 0, curFlow;
    for (lpEdge& i = (cur[x] ? cur[x] : cur[x] = G[x]); i; i = i->next)
        if ((depth[x] + 1 == depth[i->to]) && (curFlow = dfs(i->to, min(minFlow, i->cap))) > 0)
        {
            i->cap -= curFlow;
            i->rev->cap += curFlow;
            flow += curFlow;
            minFlow -= curFlow;
            if (minFlow == 0) break;
        }
    return flow;
}
int Dinic(int s, int e)
{
    target = e;
    int ans = 0;
    while (getDepth(s, e))
        memset(cur, 0, sizeof(cur)),
        ans += dfs(s, inf);
    return ans;
}
int main()
{
    lpEdge edge1, edge2;
    while (~scanf("%d%d", &m, &n))
    {
        memset(G, 0, sizeof(G));
        for (int i = 0, s, e, c; i < m; i++)
        {
            scanf("%d%d%d", &s, &e, &c);
            edge1 = addEdge(G, s, e, c);
            edge2 = addEdge(G, e, s, 0);
            edge1->rev = edge2;
            edge2->rev = edge1;
        }
        printf("%d\n", Dinic(1, n));
    }
    return 0;
}