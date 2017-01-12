#include <cstdio>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", (n == 1) ? 1 : (k < n - k + 1 ? k : n - k + 1) << 1);
}