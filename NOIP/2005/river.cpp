#include <algorithm>
#include <cstdio>
#include <cstring>
int a[100001];
int l, s, t, m;
bool bb[100001];
int f[100001];
inline int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    memset(f, 0x3f, sizeof(f));
    scanf("%d%d%d%d", &l, &s, &t, &m);
    for (int i = 1; i <= m; i++)
        scanf("%d", a + i);
    a[m + 1] = l;
    std::sort(a, a + m + 2);
    int ans = 0;
    if (s == t)
        for (int i = 1; i <= m; i++) ans += (a[i] % s == 0);
    else
    {
        for (int i = 1; i < m + 2; i++) a[i] = a[i - 1] + (a[i] - a[i - 1]) % 90;
        for (int i = 1; i <= m; i++) bb[a[i]] = true;
        for (int i = s; i <= t; i++) f[i] = bb[i];
        for (int i = s * 2; i <= a[m + 1]; i++)
            for (int j = s; j <= t; j++)
                if (j <= i) f[i] = min(f[i], f[i - j]) + bb[i];
        ans = f[a[m + 1]];
    }
    printf("%d", ans);
    return 0;
}
