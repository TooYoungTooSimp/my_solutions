#include <cstdio>
int len[25], ans;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &len[i]), len[i] += len[i - 1];
    for (int i = 0 + 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            for (int k = j + 1; k <= n; k++)
                for (int l = k + 1; l <= n; l++)
                    if (len[j] - len[i] == len[l] - len[k] && len[n] - len[l] + len[i] == len[k] - len[j])
                        ans++;
    printf("%d", ans);
    return 0;
}