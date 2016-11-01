#include <cstdio>
int main()
{
    int n, m, k, x;
    scanf("%d%d%d%d", &n, &m, &k, &x);
    long long b = 10, ans = 1;
    while (k)
    {
        if (k & 1) ans = (ans*b) % n;
        b = (b*b) % n;
        k >>= 1;
    }
    printf("%d", int((m * ans + x) % n));
    return 0;
}