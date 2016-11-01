#include <cctype>
#include <cstdio>
const int maxn = 200001;
inline void readInt(int& x)
{
    x = 0;
    static int ch;
    while (!isdigit(ch = getchar()));
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
}
int n, w[maxn], max1[maxn], max2[maxn], sum[maxn], e[maxn][2], ans1, ans2;
int main()
{
    readInt(n);
    for (int i = 1; i < n; i++)
        readInt(e[i][0]), readInt(e[i][1]);
    for (int i = 1; i <= n; i++) readInt(w[i]);
    for (int i = 1; i <= n; i++)
    {
        sum[e[i][0]] += w[e[i][1]];
        sum[e[i][1]] += w[e[i][0]];
        if (w[e[i][1]] > max1[e[i][0]])
            max2[e[i][0]] = max1[e[i][0]], max1[e[i][0]] = w[e[i][1]];
        else if (w[e[i][1]] > max2[e[i][0]])
            max2[e[i][0]] = w[e[i][1]];
        if (w[e[i][0]] > max1[e[i][1]])
            max2[e[i][1]] = max1[e[i][1]], max1[e[i][1]] = w[e[i][0]];
        else if (w[e[i][0]] > max2[e[i][1]])
            max2[e[i][1]] = w[e[i][0]];
    }
    for (int i = 1; i <= n; i++)
        if (ans1 < max1[i] * max2[i]) ans1 = max1[i] * max2[i];
    for (int i = 1; i <= n; i++)
        ans2 = (ans2 + w[e[i][1]] * ((sum[e[i][0]] - w[e[i][1]] + 10007) % 10007)) % 10007,
        ans2 = (ans2 + w[e[i][0]] * ((sum[e[i][1]] - w[e[i][0]] + 10007) % 10007)) % 10007;
    printf("%d %d", ans1, ans2);
    return 0;
}