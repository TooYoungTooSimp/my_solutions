#include <cctype>
#include <cstdio>
#include <cstring>
inline void readInt(int &x)
{
    x = 0;
    static int ch;
    while (!isdigit(ch = getchar()))
        ;
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
}
typedef struct Edge
{
    int to;
    Edge *next;
    Edge(int t, Edge *n) : to(t), next(n) {}
} * lpEdge;
lpEdge G[200001], R[200001];
#define addEdge(g, x, y) g[x] = new Edge(y, g[x])
int n, m, s, t, que[200001], dis[200001];
bool vis[200001], can[200001];
int main()
{
    readInt(n), readInt(m);
    for (int i = 0, x, y; i < m; i++)
        readInt(x), readInt(y), addEdge(G, x, y), addEdge(R, y, x);
    readInt(s), readInt(t);
    vis[que[0] = t] = true;
    for (int head = 0, tail = 1; head < tail;)
        for (lpEdge cur = R[que[head++]]; cur; cur = cur->next)
            if (!vis[cur->to]) vis[que[tail++] = cur->to] = true;
    for (int i = 1; i <= n; i++) can[i] = true;
    for (int i = 1; i <= n; i++)
        if (G[i] == 0)
            can[i] = false;
        else
            for (lpEdge cur = G[i]; can[i] && cur; cur = cur->next)
                can[i] = vis[cur->to];
    can[t] = true;
    memset(dis, -1, sizeof(dis));
    dis[que[0] = s] = 0;
    if (can[s])
        for (int head = 0, tail = 1; head < tail;)
            for (lpEdge cur = G[que[head++]]; cur; cur = cur->next)
                if (can[cur->to] && dis[cur->to] == -1)
                    dis[que[tail++] = cur->to] = dis[que[head - 1]] + 1;
    printf("%d", dis[t]);
    return 0;
}