#include <cstdio>
#include <cctype>
inline void readInt(int& x)
{
    x = 0;
    static int ch;
    while (!isdigit(ch = getchar()));
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
}
inline int _(int x) { return x < 0 ? 0 : x; }
int main()
{
    int n, cur, pre = 0, ans = 0;
    readInt(n);
    for (int i = 0; i < n; i++, pre = cur)
        readInt(cur), ans += _(cur - pre);
    printf("%d", ans);
    return 0;
}
