#include <algorithm>
#include <cstdio>
int a[100], n, f[100];
int main()
{
    while (~scanf("%d", &a[n])) f[n] = 1, n++;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[j] >= a[i] && f[j] + 1 > f[i])
                f[i] = f[j] + 1;
    printf("%d\n", *std::max_element(f, f + n));
    for (int i = 0; i < n; i++) f[i] = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[j] < a[i] && f[j] + 1 > f[i])
                f[i] = f[j] + 1;
    printf("%d\n", *std::max_element(f, f + n));
    return 0;
}