#include <cstdio>
int a[101], f1[101], f2[101];
int main()
{
    int n, maxn = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", a + i), f1[i] = f2[i] = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[j] < a[i] && f1[j] + 1 > f1[i])
                f1[i] = f1[j] + 1;
    for (int i = n - 1; i >= 0; i--)
        for (int j = n - 1; j > i; j--)
            if (a[j] < a[i] && f2[j] + 1 > f2[i])
                f2[i] = f2[j] + 1;
    for (int i = 0; i < n; i++)
        if (maxn < f1[i] + f2[i] - 1)
            maxn = f1[i] + f2[i] - 1;
    printf("%d", n - maxn);
    return 0;
}
