#include <bits/stdc++.h>
using namespace std;
bool f[55][1050];
int main()
{
    int n, b, m, c;
    scanf("%d%d%d", &n, &b, &m);
    f[0][b] = true;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &c);
        for (int j = 0; j <= m; j++)
        {
            if (j >= c) f[i][j] |= f[i - 1][j - c];
            if (j <= m - c) f[i][j] |= f[i - 1][j + c];
        }
    }
    int ans = -1;
    for (int i = 0; i <= m; i++)
        if (f[n][i]) ans = i;
    printf("%d", ans);
    return 0;
}