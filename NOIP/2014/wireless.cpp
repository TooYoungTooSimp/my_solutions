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
inline int abs(int x) { return x < 0 ? -x : x; }
int d, n, a[20][3], ans, cnt;
int main()
{
    readInt(d), readInt(n);
    for (int i = 0; i < n; i++) readInt(a[i][0]), readInt(a[i][1]), readInt(a[i][2]);
    for (int i = 0; i <= 128; i++)
        for (int j = 0; j <= 128; j++)
        {
            int tmp = 0;
            for (int k = 0; k < n; k++)
                if (abs(a[k][0] - i) <= d && abs(a[k][1] - j) <= d) tmp += a[k][2];
            if (tmp > ans) ans = tmp, cnt = 0;
            else if (tmp == ans) cnt++;
        }
    printf("%d %d", cnt + 1, ans);
    return 0;
}