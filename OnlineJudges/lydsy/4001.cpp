//http://blog.miskcoo.com/2015/04/bzoj-4001
#include <cstdio>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%.9lf", 1.0 * n * (n + 1) / 2 / (n * 2 - 1));
    return 0;
}