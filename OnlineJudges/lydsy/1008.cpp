#include <cstdio>
typedef long long int64;
const int MOD = 100003;
int fast_pow(int64 a, int64 b)
{
    int64 ans = 1;
    for (; b; a = (a * a) % MOD, b >>= 1)
        if (b & 1)
            ans = (ans * a) % MOD;
    return ans;
}
int main()
{
    int64 m, n;
    scanf("%lld%lld", &m, &n);
    printf("%lld", (fast_pow(m, n) - (m * fast_pow(m - 1, n - 1)) % MOD + MOD) % MOD);
    return 0;
}