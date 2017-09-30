#include <cstdio>
int main()
{
    int a, b, f, k, r, ans = 0;
    for (scanf("%d%d%d%d", &a, &b, &f, &k), r = b; k--; f = a - f)
        if (r < f || b < a - f)
            return puts("-1"), 0;
        else if (r >= a + (k ? a - f : 0))
            r -= a;
        else
            ans++, r = b - a + f;
    return printf("%d", ans), 0;
}