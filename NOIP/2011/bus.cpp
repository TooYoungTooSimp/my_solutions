#include <cassert>
#include <cstdio>
#include <numeric>
inline int max(int a, int b) { return a > b ? a : b; }
//D[i]=len(i->i+1) sum[i]=sum(i->i+1) canReduce[i]=1*D[i]+...
int n, m, k, D[1001], last[1001], sum[1001], time[1001], canReduce[1001];
struct p
{
    int t, a, b;
} P[10001];
#define update() \
    ;            \
    for (int i = 2; i <= n; i++) time[i] = max(time[i - 1], last[i - 1]) + D[i - 1];
#define getTime() std::accumulate(P, P + m, 0, [](int init, const decltype(*P) val) { return init + (time[val.b] - val.t); })
int main()
{
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i < n; i++)
        scanf("%d", D + i);
    for (int i = 0; i < m; i++)
        scanf("%d%d%d", &P[i].t, &P[i].a, &P[i].b);
    for (int i = 0; i < m; i++)
        last[P[i].a] = max(last[P[i].a], P[i].t),
        sum[P[i].a]++, sum[P[i].b]--;
    for (int i = 2; i <= n; i++) sum[i] += sum[i - 1];
    time[1] = last[1];
    update();
    int ans = getTime();
    while (k--)
    {
        for (int i = n - 1; i; i--) canReduce[i] =
                                        (time[i + 1] > last[i + 1]) ? sum[i] + canReduce[i + 1] : sum[i];
        int maxn = 0, maxid = 0;
        for (int i = n - 1; i; i--)
            if (canReduce[i] > maxn && D[i] > 0)
                maxn = canReduce[maxid = i];
        if (maxn == 0) break;
        D[maxid]--;
        update();
        int newTime = getTime();
        printf(":%d %d\n", ans, newTime);
        ans -= maxn;
        printf(":%d %d\n", ans, newTime);
        assert(ans == newTime);
    }
    printf("%d", ans);
    return 0;
}