#include <cctype>
#include <cstdint>
#include <cstdio>
#include <cstring>
void getint(int &x)
{
    x = 0;
    int ch;
    while (!isdigit(ch = getchar()))
        ;
    while (isdigit(ch))
        x = x * 10 + ch - '0',
        ch = getchar();
}
int n, m, r[1000001], d[1000001], s[1000001], t[1000001];
int64_t a[1000001];
bool check(int x)
{
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= x; i++)
        a[s[i]] += d[i], a[t[i] + 1] -= d[i];
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        if (a[i] > r[i]) return false;
    }
    return true;
}
int main()
{
    getint(n), getint(m);
    for (int i = 1; i <= n; i++) getint(r[i]);
    for (int i = 1; i <= m; i++) getint(d[i]), getint(s[i]), getint(t[i]);
    int _l = 0, _r = m + 1, _m;
    while (_l < _r)
    {
        _m = (_l + _r) >> 1;
        if (check(_m))
            _l = _m + 1;
        else
            _r = _m;
    }
    if (_r == m + 1)
        putchar('0');
    else
        printf("-1\n%d", _l);
    return 0;
}