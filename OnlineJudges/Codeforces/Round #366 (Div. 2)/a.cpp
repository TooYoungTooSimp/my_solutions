#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf(i & 1 ? "I hate" : "I love");
        if (i != n) printf(" that ");
    }
    printf(" it");
    return 0;
}