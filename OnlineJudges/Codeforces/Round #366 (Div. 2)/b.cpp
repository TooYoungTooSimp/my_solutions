#include <cstdio>
int n, tmp, times;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp > 1) times += tmp - 1;
        printf("%d\n", ((times &= 1) ^ 1) + 1);
    }
    return 0;
}