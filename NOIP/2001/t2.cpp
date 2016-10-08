#include <cstdio>
int n, k, f[210][9];
int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
        f[i][1] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 2; j <= k; j++)
            if (i >= j)
                f[i][j] = f[i - 1][j - 1] + f[i - j][j];
    printf("%d", f[n][k]);
    return 0;
}