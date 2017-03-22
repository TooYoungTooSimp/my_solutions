#include <cmath>
#include <cstdio>
#include <cstring>
const int N = 1000;
const double pi = acos(-1);
struct complex
{
    double r, i;
} a[N], b[N], tmp[N];
#define op(T, O) inline T operator O(const T &x, const T &y)
char s1[N], s2[N];
int ans[N];
op(complex, +) { return { x.r + y.r, x.i + y.i }; }
op(complex, -) { return { x.r - y.r, x.i - y.i }; }
op(complex, *) { return { x.r * y.r - x.i * y.i, x.r * y.i + x.i * y.r }; }
void naive_DFT(complex *arr, const int len)
{
    memset(tmp, 0, sizeof(tmp));
    for (int k = 0; k < len; k++)
        for (int n = 0; n < len; n++)
            tmp[k] = tmp[k] + arr[n] * complex{ cos(-2 * pi / len * k * n), sin(-2 * pi / len * k * n) };
    memcpy(arr, tmp, sizeof(tmp));
}
void naive_IDFT(complex *arr, const int len)
{
    memset(tmp, 0, sizeof(tmp));
    for (int k = 0; k < len; k++)
        for (int n = 0; n < len; n++)
            tmp[k] = tmp[k] + arr[n] * complex{ cos(2 * pi / len * k * n), sin(2 * pi / len * k * n) };
    memcpy(arr, tmp, sizeof(tmp));
    for (int i = 0; i < len; i++)
        arr[i].r /= len;
}
int main()
{
    while (~scanf("%s%s", s1, s2))
    {
        int len1, len2, len;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(ans, 0, sizeof(ans));
        len1 = (int)strlen(s1), len2 = (int)strlen(s2), len = len1 + len2;
        for (int i = 0; i < len1; i++)
            a[i].r = s1[len1 - 1 - i] - '0';
        for (int i = 0; i < len2; i++)
            b[i].r = s2[len2 - 1 - i] - '0';
        naive_DFT(a, len), naive_DFT(b, len);
        for (int i = 0; i < len; i++)
            a[i] = a[i] * b[i];
        naive_IDFT(a, len);
        for (int i = 0; i < len; i++)
            ans[i] = int(a[i].r + 0.5);
        for (int i = 0; i < len; i++)
            ans[i + 1] += ans[i] / 10, ans[i] %= 10;
        int high = 0;
        for (int i = len - 1; high == 0 && i >= 0; i--)
            if (ans[i])
                high = i;
        for (int i = high; i >= 0; i--)
            putchar(ans[i] + '0');
        putchar('\n');
    }
    return 0;
}
