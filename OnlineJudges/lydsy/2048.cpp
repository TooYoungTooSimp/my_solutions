#include <cstdio>
#include <cmath>
const double eps = 1e-10, r = 0.5772156649;
typedef long long ll;
int main()
{
    double ans;
    ll n, m;
    ans = n = m = 0;
    scanf("%lld%lld", &n, &m);
    if (n <= 10000)
        for (int i = 1; i <= n; i++)
            ans += 0.5 / i;
    else
        ans = log(n + 1.0) + r, ans /= 2.0;
    ans *= m;
    printf("%d\n", (int)(ans - eps));
}