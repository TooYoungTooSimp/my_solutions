#include <cstdio>
int m, d, l, q, sz, a[200001], maxa[200001];
char ch;
int main()
{
    scanf("%d%d", &m, &d);
    while (m-- && ~scanf("%s%d", &ch, &q))
        if (ch == 'A')
        {
            a[++sz] = (l + q) % d;
            for (int i = sz; i; i--)
                if (a[sz] > maxa[i]) maxa[i] = a[sz];
                else break;
        }
        else
            printf("%d\n", l = maxa[sz - q + 1]);
    return 0;
}