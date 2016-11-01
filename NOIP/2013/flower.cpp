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
int n, cur, pre, ans, mode;
int main()
{
    readInt(n);
    if (n) readInt(pre);
    for (int i = 1; i < n; i++, pre = cur)
    {
        readInt(cur);
        if (cur > pre && mode != 1)
            ans++, mode = 1;
        if (cur < pre && mode != 2)
            ans++, mode = 2;
    }
    printf("%d", ans + 1);
    return 0;
}
