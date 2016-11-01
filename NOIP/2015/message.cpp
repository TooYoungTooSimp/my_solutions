#include <cstdio>
int n, next[200001], dfn[200001], vis[200001], idx, ans = 200001;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &next[i]);
    for (int i = 1, cur; i <= n; i++) if (!dfn[i])
    {
        for (cur = i; dfn[cur] == 0; cur = next[cur]) dfn[cur] = ++idx, vis[cur] = i;
        if (vis[cur] == i && idx - dfn[cur] < ans) ans = idx - dfn[cur];
    }
    printf("%d", ans + 1);
    return 0;
}