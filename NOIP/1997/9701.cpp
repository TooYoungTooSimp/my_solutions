#include <cstdio>
#include <cstdlib>
#include <cstring>
bool isprime[1000];
int n;
int a[100001];
bool used[101];
bool check(int pos, int x)
{
    int i = pos / n, j = pos % n;
    bool flag = true;
    if (flag && i > 0 && !(a[pos - n] == -1 || isprime[x + a[pos - n]] == 0)) flag = false;
    if (flag && i < n - 1 && !(a[pos + n] == -1 || isprime[x + a[pos + n]] == 0)) flag = false;
    if (flag && j > 0 && !(a[pos - 1] == -1 || isprime[x + a[pos - 1]] == 0)) flag = false;
    if (flag && j < n - 1 && !(a[pos + 1] == -1 || isprime[x + a[pos + 1]] == 0)) flag = false;
    return flag;
}
void dfs(int step)
{
    if (step == n * n - 1)
    {
        int ii = 0;
        for (int i = 0; i < n; i++, putchar('\n'))
            for (int j = 0; j < n; j++)
                printf("%3d", a[ii++]);
        exit(0);
    }
    else
        for (int x = 1; x <= n * n; x++)
            if (!used[x] && check(step + 1, x))
            {
                a[step + 1] = x;
                used[x] = true;
                dfs(step + 1);
                used[x] = false;
                a[step + 1] = -1;
            }
}
int main()
{
    scanf("%d", &n);
    if (n != 1)
    {
        isprime[0] = isprime[1] = 1;
        isprime[2] = 0;
        for (int i = 2; i < 1000; i++)
            for (int j = i * 2; j < 1000; j += i)
                isprime[j] = 1;
        memset(a, -1, sizeof(a));
        a[0] = 1;
        used[1] = true;
        dfs(0);
    }
    puts("NO!");
    return 0;
}
