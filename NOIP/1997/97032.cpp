#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
const int L = 1 << 8;
char buffer[L], *S, *T;
#define initbuffer()                                   \
    ;                                                  \
    {                                                  \
        T = (S = buffer) + fread(buffer, 1, L, stdin); \
        while (!isdigit(*T)) T--;                      \
        T++;                                           \
    }
#define getint() (S != T ? strtol(S, &S, 10) : -1)
int a[52][52], n, m, sx, sy, dx, dy;
int dfs(int i, int j)
{
    if (a[i][j] != -1)
        return a[i][j];
    else if (i == dx && j == dy)
        return a[i][j] = 1;
    else
    {
        int ans = 0;
        if (i + 2 <= dx && j + 1 <= m)
            ans += dfs(i + 2, j + 1);
        if (i + 2 <= dx && j - 1 >= 1)
            ans += dfs(i + 2, j - 1);
        if (i + 1 <= dx && j + 2 <= m)
            ans += dfs(i + 1, j + 2);
        if (i + 1 <= dx && j - 2 >= 1)
            ans += dfs(i + 1, j - 2);
        return a[i][j] = ans;
    }
}
int main()
{
    initbuffer();
    n = getint(), m = getint(), sx = getint(), sy = getint(), dx = getint(), dy = getint();
    memset(a, -1, sizeof(a));
    printf("%d", dfs(sx, sy));
    return 0;
}
