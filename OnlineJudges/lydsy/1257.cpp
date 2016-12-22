#include <cstdio>
long long n, k, ans;
int main()
{
    scanf("%lld%lld", &n, &k);
    long long sz = n < k ? n : k;
    for (long long i = 1, last, t; i <= sz; i = last + 1)
    {
        t = k / i, last = k / t;
        if (last >= n) last = n;
        ans -= ((last - i + 1) * (i + last) >> 1) * t;
    }
    printf("%lld", ans + n * k);
}