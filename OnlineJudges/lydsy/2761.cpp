#include <cstdio>
#include <set>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        std::set<int> S;
        for (int i = 0, x; i < n; i++)
        {
            scanf("%d", &x);
            if (S.count(x) == 0)
                S.insert(x), printf(i == 0 ? "%d" : " %d", x);
        }
        putchar('\n');
    }
}