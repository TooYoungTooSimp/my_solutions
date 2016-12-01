#include <cstdio>
int m, n;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) m += n / i;
    printf("%d", m);
    return 0;
}