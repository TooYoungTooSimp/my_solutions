#include <cstdio>
#include <algorithm>
struct edge
{
    int u, v, c;
    bool operator<(const edge &rhs) const { return c < rhs.c; }
}E[900010];
int n, m, cnt, ans, fa[310];
int Find(int x) { return fa[x] == x ? x : fa[x] = Find(fa[x]); }
int main()
{
    for (int i = 0; i < 310; i++) fa[i] = i;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
        scanf("%d%d%d", &E[i].u, &E[i].v, &E[i].c);
    std::sort(E, E + m);
    for (int i = 0, a, b; i < m && cnt < n - 1; i++)
    {
        a = Find(E[i].u), b = Find(E[i].v);
        if (a != b) fa[a] = b, cnt++, ans = E[i].c;
    }
    printf("%d %d", cnt, ans);
    return 0;
}