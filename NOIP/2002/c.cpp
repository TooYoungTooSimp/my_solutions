#include <cstdio>
#include <cmath>
inline int min(int a, int b) { return a < b ? a : b; }
inline int max(int a, int b) { return a > b ? a : b; }
const double e = 0.00001, g = 10.0;
double H, S1, V, L, K;
int n;
int main()
{
    scanf("%lf%lf%lf%lf%lf%d", &H, &S1, &V, &L, &K, &n);
    printf("%d", max(min(n - 1, floor(S1 - V*(K < H ? sqrt(2 * (H - K - e) / g) : 0) + L + e)) - max(ceil(S1 - V*sqrt(2 * H / g) - e), 0) + 1, 0));
    return 0;
}