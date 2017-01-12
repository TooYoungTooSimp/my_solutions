#include <cstdio>
int ans[1000], i;
int main()
{
    int n, radix;
    scanf("%d%d", &n, &radix);
    printf("%d=", n);
    while (n)
    {
        ans[i] = n % radix;
        n /= radix;
        while (ans[i] < 0)
        {
            ans[i] -= radix;
            n++;
        }
        i++;
    }
    for (--i; i >= 0; i--)
        putchar(ans[i] < 10 ? ans[i] + '0' : ans[i] - 10 + 'A');
    printf("(base%d)", radix);
    return 0;
}