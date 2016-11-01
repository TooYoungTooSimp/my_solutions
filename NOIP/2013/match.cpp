#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility>
using namespace std;
inline void getInt(int& x)
{
    x = 0;
    static int ch;
    while (!isdigit(ch = getchar()));
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
}
#define lowbit(x) ((x)&-(x))
pair<int, int> a[100001], b[100001];
int n, c[100001], C[100001], ans;
inline int query(int pos)
{
    int ret = 0;
    for (; pos; pos -= lowbit(pos))
        ret += C[pos];
    return ret;
}
inline void add(int pos)
{
    for (; pos <= n; pos += lowbit(pos)) C[pos]++;
}
int main()
{
    getInt(n);
    for (int i = 0; i < n; i++) getInt(a[i].first), a[i].second = i + 1;
    for (int i = 0; i < n; i++) getInt(b[i].first), b[i].second = i + 1;
    std::sort(a, a + n);
    std::sort(b, b + n);
    for (int i = 0; i < n; i++) c[a[i].second] = b[i].second;
    for (int i = n; i; i--)
    {
        add(c[i]);
        ans += query(c[i] - 1);
        if (ans > 99999997) ans -= 99999997;
    }
    printf("%d", ans);
    return 0;
}