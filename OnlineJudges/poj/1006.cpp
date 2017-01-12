#include <cstdio>
int a, b, c, d, t;
int main()
{
    while (~scanf("%d%d%d%d", &a, &b, &c, &d) && ~a && ~b && ~c && ~d)
        printf("Case %d: the next triple peak occurs in %d days.\n", ++t,
               (5544 * a + 14421 * b + 1288 * c - d + 21252 + 21251) % 21252 + 1);
    return 0;
}