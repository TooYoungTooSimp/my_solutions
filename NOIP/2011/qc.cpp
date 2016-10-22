#include <cstdio>
#include <cinttypes>
inline int64_t min(int64_t a, int64_t b) { return a < b ? a : b; }
inline int64_t abs(int64_t a) { return a > 0 ? a : -a; }
int32_t n, m;
int64_t S;
struct { int32_t w, v; } sto[200001];
struct { int32_t l, r; } inv[200001];
int64_t sum[200001];
int32_t cnt[200001];
int64_t check(int64_t T)
{
    for (int32_t i = 1; i <= n; i++)
    {
        cnt[i] = cnt[i - 1], sum[i] = sum[i - 1];
        if (sto[i].w >= T) cnt[i]++, sum[i] += sto[i].v;
    }
    int64_t ret = 0;
    for (int32_t i = 1; i <= m; i++)
        ret += (cnt[inv[i].r] - cnt[inv[i].l - 1])*(sum[inv[i].r] - sum[inv[i].l - 1]);
    return ret;
}
int main()
{
    scanf("%" SCNd32 "%" SCNd32 "%" SCNd64, &n, &m, &S);
    for (int32_t i = 1; i <= n; i++)
        scanf("%" SCNd32 "%" SCNd32, &sto[i].w, &sto[i].v);
    for (int32_t i = 1; i <= m; i++)
        scanf("%" SCNd32 "%" SCNd32, &inv[i].l, &inv[i].r);
    int64_t ans = INT64_MAX >> 1;
    for (int64_t l = -1, r = INT64_MAX >> 1, mid, tmp; l < r;)
    {
        mid = (l + r) >> 1;
        ans = min(ans, abs(S - (tmp = check(mid))));
        if (tmp >= S) l = mid + 1;
        else r = mid;
    }
    printf("%" PRId64, ans);
    return 0;
}