#include <cstdio>
#include <cstring>
inline int max(int a, int b)
{
    return a > b ? a : b;
}
inline int min(int a, int b)
{
    return a < b ? a : b;
}
typedef struct Edge
{
    int to;
    Edge *next;
    Edge(int t, Edge *n) : to(t), next(n) {}
} * lpEdge;
const int MAXN = 100001;
lpEdge G1[MAXN], G2[MAXN];
#define addEdge1(x, y) G1[(x)] = new Edge((y), G1[(x)])
#define addEdge2(x, y) G2[(x)] = new Edge((y), G2[(x)])
int n, m;
int price[MAXN], mmax[MAXN], mmin[MAXN], que[MAXN << 2];
void getmin()
{
    int head, tail, x;
    head = tail = 0;
    que[tail++] = 1;
    mmin[1] = price[1];
    while (head < tail)
        for (lpEdge cur = G1[x = que[head++]]; cur; cur = cur->next)
            if (mmin[cur->to] > min(mmin[x], price[cur->to]))
                mmin[cur->to] = min(mmin[x], price[cur->to]), que[tail++] = cur->to;
}
void getmax()
{
    int head, tail, x;
    head = tail = 0;
    que[tail++] = n;
    mmax[n] = price[n];
    while (head < tail)
        for (lpEdge cur = G2[x = que[head++]]; cur; cur = cur->next)
            if (mmax[cur->to] < max(mmax[x], price[cur->to]))
                mmax[cur->to] = max(mmax[x], price[cur->to]), que[tail++] = cur->to;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", price + i);
    for (int i = 0, x, y, z; i < m; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        addEdge1(x, y), addEdge2(y, x);
        if (z == 2) addEdge1(y, x), addEdge2(x, y);
    }
    memset(mmax, 0, sizeof(mmax));
    memset(mmin, 0x3f3f3f3f, sizeof(mmin));
    getmax();
    getmin();
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, mmax[i] - mmin[i]);
    printf("%d", ans);
    return 0;
}
