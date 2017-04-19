#include <cstdio>
#include <cstring>
typedef long long i64;
const int N = int(5e5 + 5);
int n, a[N];
i64 merge(int l, int r)
{
    if (l == r - 1) return 0;
    int m = (l + r) >> 1, bn = m - l, cn = r - m;
    i64 cnt = merge(l, m) + merge(m, r);
    static int b[N], c[N];
    memcpy(b, a + l, bn << 2), memcpy(c, a + m, cn << 2);
    for (int i = l, bi = 0, ci = 0; i < r; i++)
        if (bi < bn && (ci == cn || b[bi] <= c[ci]))
            a[i] = b[bi++];
        else
            a[i] = c[ci++], cnt += bn - bi;
    return cnt;
}
int main()
{
    while (scanf("%d", &n), n)
    {
        for (int i = 0; i < n; i++) scanf("%d", a + i);
        printf("%lld\n", merge(0, n));
    }
    return 0;
}