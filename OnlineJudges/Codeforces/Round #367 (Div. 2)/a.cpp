#include <cmath>
#include <cstdio>
int main()
{
    int n, x0, y0, x, y, v;
    double ans = 1e16, tmp;
    scanf("%d%d%d", &x0, &y0, &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &x, &y, &v);
        x -= x0;
        y -= y0;
        tmp = sqrt(x * x + y * y) / v;
        if (tmp < ans) ans = tmp;
    }
    printf("%.10lf", ans);
    return 0;
}