#include <cstdio>
int n, ans;
inline int num2stk(int x)
{
    const static int H[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int ret = 0;
    if (x == 0)
        ret = 6;
    else
        while (x) ret += H[x % 10], x /= 10;
    return ret;
}
int main()
{
    scanf("%d", &n);
    n -= 4;
    if (n > 0)
        for (int i = 0; i <= 1000; i++)
            for (int j = 0; j <= 1000; j++)
                if (num2stk(i) + num2stk(j) + num2stk(i + j) == n)
                    ans++;
    printf("%d", ans);
    return 0;
}
