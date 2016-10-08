#include <cstdio>
int n, x, y, a, b;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x > y) a++;
        if (x < y) b++;
    }
    if (a == b)
        printf("Friendship is magic!^^");
    else if (a > b)
        printf("Mishka");
    else
        printf("Chris");
    return 0;
}