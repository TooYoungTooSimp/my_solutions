#include <cstdio>
void exgcd(int a, int b, int &x, int &y)
{
    if (b == 0)
        x = 1, y = 0;
    else
        exgcd(b, a % b, y, x), y -= x * (a / b);
}
int main()
{
    int a, b, x, y;
    scanf("%d%d", &a, &b);
    exgcd(a, b, x, y);
    while (x < 0) x += b;
    printf("%d", x);
    return 0;
}