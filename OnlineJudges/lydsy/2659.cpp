//http://www.cnblogs.com/iwtwiioi/p/4985747.html
#include <cstdio>
int main()
{
    int p, q;
    scanf("%d%d", &p, &q);
    printf("%lld", 1ll * (q - 1) * (p - 1) / 4 + (p == q) * (q - 1) / 2);
    return 0;
}