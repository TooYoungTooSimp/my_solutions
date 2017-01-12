#include <cstdio>
unsigned n, sc[100], f[51][51], pos[51][51];
unsigned dfs(int i, int j)
{
    if (f[i][j])
        return f[i][j];
    else if (i > j)
        return 1;
    else if (i == j)
        return sc[i];
    else
    {
        unsigned mmax = 0, cur;
        for (int x = i; x <= j; x++)
        {
            cur = dfs(i, x - 1) * dfs(x + 1, j) + sc[x];
            if (cur > mmax)
                mmax = cur, pos[i][j] = x;
        }
        return f[i][j] = mmax;
    }
}
void print(int i, int j)
{
    if (i > j) return;
    if (i == j) pos[i][j] = i;
    printf("%d ", pos[i][j]);
    print(i, pos[i][j] - 1);
    print(pos[i][j] + 1, j);
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", sc + i);
    printf("%d\n", dfs(1, n));
    print(1, n);
    return 0;
}