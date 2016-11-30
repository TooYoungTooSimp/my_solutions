#include <cstdio>
#include <cctype>
inline int min(int a, int b) { return a < b ? a : b; }
inline int log2(int x) { int k = 0; while ((1 << (k + 1)) <= x) k++; return k; }
void getInt(int& x)
{
    x = 0;
    static int ch;
    while (!isdigit(ch = getchar()));
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
}
typedef struct Edge
{
    int to;
    Edge* next;
    Edge(int t, Edge* n) :to(t), next(n) { }
}*lpEdge;
lpEdge G[10000];
#define addEdge(x,y) G[x] = new Edge(y, G[x])
int d[20001][100], E[20001], F[20001], cnt;
void dfs(int id)
{
    if (!F[id]) F[id] = cnt;
    E[cnt++] = id;
    for (lpEdge cur = G[id]; cur; cur = cur->next)
        dfs(cur->to), E[cnt++] = id;
}
void genST()
{
    for (int i = 0; i < cnt; i++) d[i][0] = E[i];
    for (int j = 1; (1 << j) <= cnt; j++)
        for (int i = 0; i + (1 << j) <= cnt; i++)
            d[i][j] = min(d[i][j - 1], d[i + (1 << (j - 1))][j - 1]);
}
inline int RMQ(int x, int y)
{
    int k = log2(y - x + 1);
    return min(d[x][k], d[y - (1 << k) + 1][k]);
}
inline int LCA(int x, int y)
{
    x = F[x], y = F[y];
    if (x > y) x ^= y, y ^= x, x ^= y;
    return RMQ(x, y);
}
int main()
{
    int n, m;
    getInt(n), getInt(m);
    for (int i = 1, x, y; i < n; i++)
        getInt(x), getInt(y), addEdge(x, y);
    dfs(1);
    genST();
    for (int i = 0, x, y; i < m; i++)
        getInt(x), getInt(y), printf("%d\n", LCA(x, y));
    return 0;
}