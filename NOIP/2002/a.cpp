#include <cstdio>
int a[101], n, sum;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) sum += a[i];
    sum /= n;
    for (int i = 0; i < n; i++) a[i] -= sum;
    sum = 0;
    for (int i = 0; i < n - 1; i++)
        if (a[i] == 0)
            continue;
        else
            a[i + 1] += a[i],
                a[i] = 0,
                sum++;
    printf("%d", sum);
    return 0;
}