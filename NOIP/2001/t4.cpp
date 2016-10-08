#include <cstdio>
#include <cmath>
#include <cstring>
int que[100000], x[1000], y[1000], head, tail, n, s, t, a, b, xi[4], yi[4], ti;
double pathlen[1000];
typedef struct Edge
{
    int from, to;
    double dist;
    Edge* next;
    Edge(int _f, int _t, double _d, Edge* _n = 0) :from(_f), to(_t), dist(_d), next(_n) {}
}*lpEdge;
lpEdge G[1000];
#define addEdge(from, to, dist) G[(from)] = new Edge((from), (to), (dist), G[(from)])
#define dist(x1,y1,x2,y2) sqrt(((x1)-(x2))*((x1)-(x2)) + ((y1)-(y2))*((y1)-(y2)))
double spfa(int f, int e)
{
    memset(pathlen, 0x7f, sizeof(pathlen));
    pathlen[f] = head = tail = 0;
    que[tail++] = f;
    while (head < tail)
        for (lpEdge cur = G[que[head++]]; cur; cur = cur->next)
            if (pathlen[cur->to] > pathlen[cur->from] + cur->dist)
                pathlen[cur->to] = pathlen[cur->from] + cur->dist,
                que[tail++] = cur->to;
    return pathlen[e];
}
int main()
{
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d%d", &s, &t, &a, &b);
        for (int i = 0; i < s; i++)
        {
            scanf("%d%d%d%d%d%d%d", &xi[0], &yi[0], &xi[1], &yi[1], &xi[2], &yi[2], &ti);
            for (int j = 0; j < 3; j++)
                if ((xi[(j + 0) % 3] - xi[(j + 1) % 3])*(xi[(j + 2) % 3] - xi[(j + 1) % 3]) +
                    (yi[(j + 0) % 3] - yi[(j + 1) % 3])*(yi[(j + 2) % 3] - yi[(j + 1) % 3]) == 0)
                    xi[3] = xi[(j + 0) % 3] + xi[(j + 2) % 3] - xi[(j + 1) % 3],
                    yi[3] = yi[(j + 0) % 3] + yi[(j + 2) % 3] - yi[(j + 1) % 3];
            for (int j = 0; j < 4; j++)
                x[i * 4 + j] = xi[j], y[i * 4 + j] = yi[j];
            for (int j = 0; j < 4; j++)
                for (int k = 0; k < 4; k++)
                    if (j != k)
                        addEdge(i * 4 + j, i * 4 + k, dist(xi[j], yi[j], xi[k], yi[k])*ti);
        }
        for (int i = 0; i < s; i++)
            for (int j = 0; j < s; j++)
                if (i != j)
                    for (int k = 0; k < 4; k++)
                        for (int l = 0; l < 4; l++)
                            addEdge(i * 4 + k, j * 4 + l, dist(x[i * 4 + k], y[i * 4 + k], x[j * 4 + l], y[j * 4 + l])*t);
        for (int j = 1; j <= 4; j++)
            addEdge(s * 4, a * 4 - j, 0),
            addEdge(b * 4 - j, s * 4 + 1, 0);
        printf("%.2f\n", spfa(s * 4, s * 4 + 1));
    }
    return 0;
}