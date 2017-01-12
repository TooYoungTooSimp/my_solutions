#include <cstdio>
#include <cstring>
inline int max(int a, int b) { return a > b ? a : b; }
inline int min(int a, int b) { return a < b ? a : b; }
int ans, n, k;
int a[64], aa[64], f[200];
int getmax(int l)
{
    memset(f, 0x3f3f3f3f, sizeof(f));
    f[0] = 0;
    for (int i = 0; i < l; i++)
        for (int j = a[i]; j < 200; j++)
            f[j] = min(f[j], f[j - a[i]] + 1);
    for (int i = 0; i < 200; i++)
        if (f[i] > n)
            return i - 1;
}
void dfs(int step)
{
    int curmax = getmax(step);
    if (step == k)
    {
        if (ans < curmax)
        {
            ans = curmax;
            memcpy(aa, a, sizeof(int) << 6);
        }
    }
    else
        for (int i = a[step - 1] + 1; i <= curmax + 1; i++)
        {
            a[step] = i;
            dfs(step + 1);
        }
}
int main()
{
    scanf("%d%d", &n, &k);
    a[0] = 1;
    dfs(1);
    for (int i = 0; i < k; i++)
        printf("%d ", aa[i]);
    printf("\nMAX=%d", ans);
    return 0;
}