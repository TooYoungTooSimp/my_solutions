#include <cstdio>
#include <cctype>
inline int min(int a, int b) { return a < b ? a : b; }
inline int gcd(int a, int b) { return b == 0 ? a : gcd(b, a%b); }
inline void read(int &x)
{
    int ch = x = 0;
    while (!isdigit(ch = getchar()));
    for (; isdigit(ch); ch = getchar()) x = (x << 3) + (x << 1) + ch - '0';
}
int n, a[1 << 20 | 1], Log[1 << 20 | 1];
int M[1 << 20 | 1][20], G[1 << 20 | 1][20];
struct
{
    int c, a[1 << 20 | 1], r;
}ans;
inline bool can(int l, int r)
{
    int k = Log[r - l + 1];
    return min(M[l][k], M[r - (1 << k) + 1][k]) == gcd(G[l][k], G[r - (1 << k) + 1][k]);
}
bool check(int len)
{
    int cnt = 0;
    for (int i = 0; i + len < n; i++)
        if (can(i, i + len))
            ans.a[cnt++] = i;
    if (cnt) ans.r = len, ans.c = cnt;
    return cnt;
}
int main()
{
    read(n);
    Log[0] = -1;
    for (int i = 1; i <= n; i++) Log[i] = Log[i >> 1] + 1;
    for (int i = 0; i < n; i++) read(a[i]);
    for (int i = 0; i < n; i++) M[i][0] = G[i][0] = a[i];
    for (int j = 1; j <= Log[n]; j++)
        for (int i = 0; i + (1 << j) - 1 < n; i++)
            M[i][j] = min(M[i][j - 1], M[i + (1 << (j - 1))][j - 1]),
            G[i][j] = gcd(G[i][j - 1], G[i + (1 << (j - 1))][j - 1]);
    int L = 0, R = n, m;
    while (L < R)
        check(m = (L + R) >> 1) ? L = m + 1 : R = m;
    printf("%d %d\n", ans.c, ans.r);
    for (int i = 0; i < ans.c; i++)
        printf("%d ", ans.a[i] + 1);
    return 0;
}