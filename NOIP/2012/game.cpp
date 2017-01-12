#include <algorithm>
#include <cstdio>
#include <cstdio>
using namespace std;
#define _User_BIGINT
#ifndef _User_BIGINT
using BigInt = long long;
#else
struct BigInt
{
    const static int BASE = 10000;
    int data[1001], len;
    void refresh()
    {
        len = 0;
        for (int i = 0; i < 1000; i++)
            data[i + 1] += data[i] / BASE, data[i] %= BASE;
        for (int i = 1000; i >= 0 && len == 0; i--)
            if (data[i]) len = i;
    }
    BigInt(int init = 0)
    {
        memset(data, 0, sizeof(data));
        data[0] = init;
        refresh();
    }
    void print() const
    {
        printf("%d", data[len]);
        for (int i = len - 1; i >= 0; i--) printf("%04d", data[i]);
        putchar('\n');
    }
    bool operator<(const BigInt &r)
    {
        for (int i = max(len, r.len); i >= 0; i--)
            if (data[i] < r.data[i])
                return true;
            else if (data[i] > r.data[i])
                return false;
        return false;
    }
    void operator*=(int x)
    {
        for (int i = 0; i <= len; i++)
            data[i] *= x;
        refresh();
    }
    void operator/=(int x)
    {
        int d = 0;
        for (int i = len; i >= 0; i--)
        {
            d = d * BASE + data[i];
            data[i] = d / x;
            d %= x;
        }
        refresh();
    }
};
#endif
int n;
struct
{
    int a, b;
} p[1001];
void print(const BigInt &val)
{
#ifndef _User_BIGINT
    printf("%lld\n", val);
#else
    val.print();
#endif
}
int main()
{
    scanf("%d%d%d", &n, &p[0].a, &p[0].b);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &p[i].a, &p[i].b);
    sort(p + 1, p + n + 1, [](const decltype(*p) l, const decltype(*p) r) {
        return l.a * l.b < r.a * r.b;
    });
    BigInt ans = 0;
    BigInt m = p->a;
    for (int i = 1; i <= n; i++)
    {
        BigInt c = m;
        c /= p[i].b;
        if (ans < c) ans = c;
        m *= p[i].a;
    }
    print(ans);
    return 0;
}