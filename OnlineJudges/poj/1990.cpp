#include <algorithm>
#include <cstdio>
#define lowbit(x) ((x) & -(x))
const int N = 20005;
void add(int *arr, int pos, int val)
{
    for (; pos < N; pos += lowbit(pos))
        arr[pos] += val;
}
int query(int *arr, int pos)
{
    int ans = 0;
    for (; pos; pos -= lowbit(pos))
        ans += arr[pos];
    return ans;
}
int sum[2][N];
struct cow
{
    int pos, vol;
    bool operator<(const cow &rhs) const { return vol < rhs.vol; }
} cows[N];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &cows[i].vol, &cows[i].pos);
    std::sort(cows + 1, cows + n + 1);
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        long long a = query(sum[0], cows[i].pos), b = query(sum[1], cows[i].pos);
        ans += (cows[i].pos * a - b + query(sum[1], 20000) - b -
                (i - 1 - a) * cows[i].pos) *
               cows[i].vol;
        add(sum[0], cows[i].pos, 1);
        add(sum[1], cows[i].pos, cows[i].pos);
    }
    printf("%lld", ans);
    return 0;
}