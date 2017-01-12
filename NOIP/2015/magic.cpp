#include <cstdio>
int a[39][39], n;
int main()
{
    scanf("%d", &n);
    for (int i = 1, x = 0, y = (n >> 1); i <= n * n; i++)
    {
        a[x][y] = i;
        if (x == 0 && y != n - 1)
            x = n - 1, y++;
        else if (y == n - 1 && x != 0)
            y = 0, x--;
        else if (x == 0 && y == n - 1)
            x++;
        else if (a[x - 1][y + 1] == 0)
            x--, y++;
        else
            x++;
    }
    for (int i = 0; i < n; i++, putchar('\n'))
        for (int j = 0; j < n; j++, putchar(' '))
            printf("%d", a[i][j]);
    return 0;
}