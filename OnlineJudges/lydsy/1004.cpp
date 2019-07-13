#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll fpow(ll a, ll b, ll m)
{
    ll r = 1;
    for (; b; b >>= 1, a = a * a % m)
        if (b & 1)
            r = r * a % m;
    return r;
}
inline ll inv(ll x, ll m) { return fpow(x, m - 2, m); }
const int N = 110;
int a[N], b[N], d[N], f[N][N][N];
int sr, sb, sg, m, p, n;
int calc(int r)
{
    memset(f, 0, sizeof(f));
    memset(d, 0, sizeof(d));
    ***f = 1;
    int T = 0;
    for (int i = 1; i <= n; i++)
        if (b[i] != r)
        {
            for (int p = i; b[p] != r; p = a[p])
                b[p] = r, d[T]++;
            T++;
        }
    for (int t = 0; t < T; t++)
        for (int i = sr; ~i; i--)
            for (int j = sb; ~j; j--)
                for (int k = sg; ~k; k--)
                {
                    if (i >= d[t]) f[i][j][k] = (f[i][j][k] + f[i - d[t]][j][k]) % p;
                    if (j >= d[t]) f[i][j][k] = (f[i][j][k] + f[i][j - d[t]][k]) % p;
                    if (k >= d[t]) f[i][j][k] = (f[i][j][k] + f[i][j][k - d[t]]) % p;
                }
    return f[sr][sb][sg];
}
int main()
{
    scanf("%d%d%d%d%d", &sr, &sb, &sg, &m, &p), n = sr + sb + sg;
    memset(b, -1, sizeof(b));
    for (int i = 1; i <= n; i++) a[i] = i;
    ll ans = calc(0);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            scanf("%d", a + j);
        ans += calc(i);
    }
    printf("%lld", ans % p * inv(m + 1, p) % p);
    return 0;
}