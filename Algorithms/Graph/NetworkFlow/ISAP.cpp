#include <cstdio>
#include <cstring>
struct Edge
{
    int from, to, cap;
    Edge *next, *rev;
    Edge(int f, int t, int c) :from(f), to(t), cap(c), next(0), rev(0) {}
};
typedef Edge* lpEdge;
inline int min(int a, int b) { return (a < b ? a : b); }
lpEdge addEdge(lpEdge* G, int from, int to, int cap)
{
    lpEdge newEdge = new Edge(from, to, cap);
    newEdge->next = G[from];
    G[from] = newEdge;
    return newEdge;
}
const int maxn = 201, inf = 0x3f3f3f3f;
int m, n;
int num[maxn], d[maxn];
lpEdge G[maxn], cur[maxn], fa[maxn];
int ISAP(int s, int e, int cnt)
{
    int flow = 0, x;
    int* que = new int[maxn];
    int head, tail;
    head = tail = 0;
    for (int i = 0; i < cnt; i++) d[i] = cnt;
    d[e] = 0;
    que[tail++] = e;
    while (head < tail)
    {
        x = que[head++];
        for (lpEdge i = G[x]; i; i = i->next)
            if (i->rev->cap > 0 && d[i->to] >= cnt)
                que[tail++] = i->to,
                d[i->to] = d[x] + 1;
    }
    delete[] que;
    memset(cur, 0, sizeof(cur));
    memset(num, 0, sizeof(num));
    for (int i = 0; i < cnt; i++) num[d[i]]++;
    x = s;
    while (d[s] < cnt)
    {
        if (x == e)
        {
            int curFlow = inf;
            lpEdge curEdge;
            while (x != s)
            {
                curEdge = fa[x];
                curFlow = min(curFlow, curEdge->cap);
                x = curEdge->from;
            }
            x = e;
            while (x != s)
            {
                curEdge = fa[x];
                curEdge->cap -= curFlow;
                curEdge->rev->cap += curFlow;
                x = curEdge->from;
            }
            flow += curFlow;
            x = s;
        }
        bool needRetreat = true;
        for (lpEdge& i = (cur[x] ? cur[x] : cur[x] = G[x]); i; i = i->next)
            if (i->cap > 0 && d[x] == d[i->to] + 1)
            {
                fa[i->to] = i;
                x = i->to;
                needRetreat = false; break;
            }
        if (needRetreat)
        {
            int dis = cnt - 1;
            for (lpEdge i = G[x]; i; i = i->next)
                if (i->cap)
                    dis = min(dis, d[i->to]);
            if (--num[d[x]] == 0) break;
            num[d[x] = dis + 1]++;
            if (x != s) x = fa[x]->from;
        }
    }
    return flow;
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
        printf("%d\n", ISAP(1, n, n + 1));
    }
    return 0;
}
