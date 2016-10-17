#include <cstdio>
#include <algorithm>
using std::sort;
struct
{
    int f[40001];
    void init() { for (int i = 0; i <= 40000; i++) f[i] = i; }
    int find(int x) { return (x == f[x]) ? x : f[x] = find(f[x]); }
} S;
struct { int a, b, c; } p[100000];
int main()
{
    S.init();
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
        scanf("%d%d%d", &p[i].a, &p[i].b, &p[i].c);
    sort(p, p + m, [](decltype(p[0]) l, decltype(p[0]) r) {return l.c > r.c; });
    for (int i = 0, x, y; i < m; i++)
    {
        x = S.find(p[i].a), y = S.find(p[i].b);
        if (x == y)
        {
            printf("%d", p[i].c);
            return 0;
        }
        S.f[y] = S.find(p[i].a + n);
        S.f[x] = S.find(p[i].b + n);
    }
    putchar('0');
    return 0;
}
