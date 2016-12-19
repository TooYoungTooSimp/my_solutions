//http://blog.csdn.net/popoqqq/article/details/39924877
#include <cstdio>
long long f[100100], ans;
int main()
{
    int m, n, k;
    scanf("%d%d", &m, &n);
    k = (m < n ? m : n);
    for (int i = k; i; i--)
    {
        f[i] = 1ll * (m / i) * (n / i);
        for (int j = 2; j * i <= k; j++)
            f[i] -= f[i * j];
        ans += f[i] * (i + i - 1);
    }
    printf("%lld", ans);
    return 0;
}