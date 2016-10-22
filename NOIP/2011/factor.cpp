#include <cstdio>
using int64 = long long;
const int mod = 10007;
int fast_pow(int a, int p)
{
    int ans = 1;
    for (a %= mod; p; p >>= 1)
    {
        if (p & 1) ans = (ans*a) % mod;
        a = (a*a) % mod;
    }
    return ans;
}
int C[1001];
int main()
{
    int a, b, k, n, m;
    scanf("%d%d%d%d%d", &a, &b, &k, &n, &m);
    C[0] = 1;
    for (int i = 0; i < k; i++)
        for (int j = i + 1; j; j--)
            C[j] = (C[j] + C[j - 1]) % mod;
    printf("%d", (int64(C[n]) * fast_pow(a, n) * fast_pow(b, m)) % mod);
    return 0;
}