#include <cstdio>
#include <cstring>
inline int max(int a, int b) { return a > b ? a : b; }
int n, a[10000], f[10000][10000], ans;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    memcpy(a + n, a, sizeof(int) * n);
    for (int l = 1; l <= n; l++)
        for (int i = 0; i + l < (n << 1); i++)
            for (int k = 0; k < l; k++)
                f[i][i + l] = max(f[i][i + l], f[i][i + k] + f[i + k + 1][i + l] + a[i] * a[i + k + 1] * a[i + l + 1]);
    for (int i = 0; i < n; i++) ans = max(ans, f[i][i + n - 1]);
    printf("%d", ans);
    return 0;
}