#include <algorithm>
#include <cstdio>
int a[10010];
int main()
{
    int n, m, ans = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1, x; i <= n; i++)
    {
        scanf("%d", &x);
        ans -= x;
        a[i] = x << 1;
    }
    for (int i = 1, x, y, z; i <= m; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        ans -= z, a[x] += z, a[y] += z;
    }
    std::sort(a + 1, a + n + 1);
    for (int i = 2; i <= n; i += 2)
        ans += a[i];
    printf("%d", ans);
    return 0;
}