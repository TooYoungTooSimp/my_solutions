#include <cstdio>
int save, cur, touse;
int main()
{
    for (int i = 1; i <= 12; i++)
    {
        cur += 300;
        scanf("%d", &touse);
        if (touse > cur)
        {
            printf("-%d", i);
            return 0;
        }
        cur -= touse;
        save += cur / 100 * 100;
        cur %= 100;
    }
    printf("%d", cur + save * 6 / 5);
    return 0;
}
