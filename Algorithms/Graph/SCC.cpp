#include <cctype>
#include <cstdio>
inline int min(int a, int b) { return a < b ? a : b; }
const int maxn = 1001;
inline void getInt(int &x)
{
    x = 0;
    int ch;
    while (!isdigit(ch = getchar()))
        ;
    while (isdigit(ch))
        x = x * 10 + ch - '0', ch = getchar();
}
typedef struct Edge
{
    int to;
    Edge *next;
    Edge(int t, Edge *n) : to(t), next(n) {}
} * lpEdge;
lpEdge G[maxn];
int Low[maxn], DFN[maxn], st[maxn], s_top, DFNcnt, SCC[maxn], SCCcnt;
bool instack[maxn];
#define addEdge(x, y) G[x] = new Edge(y, G[x])
void tarjan(int id)
{
    instack[id] = true;
    DFN[id] = Low[id] = ++DFNcnt;
    st[s_top++] = id;
    for (lpEdge cur = G[id]; cur; cur = cur->next)
    {
        if (!DFN[cur->to])
            tarjan(cur->to), Low[id] = min(Low[id], Low[cur->to]);
        else if (instack[cur->to])
            Low[id] = min(Low[id], DFN[cur->to]);
    }
    if (DFN[id] == Low[id])
    {
        SCCcnt++;
        do
            s_top--,
                SCC[st[s_top]] = SCCcnt,
                instack[st[s_top]] = false;
        while (st[s_top] != id);
    }
}
int main()
{
    int n;
    getInt(n);
    for (int i = 0, x, y; i < n; i++)
        getInt(x), getInt(y), addEdge(x, y);
    tarjan(1);
    for (int i = 0; i < 10; i++)
        printf("%d : %d\n", i, SCC[i]);
    return 0;
}