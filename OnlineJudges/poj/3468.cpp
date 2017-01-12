#include <cstdio>
typedef long long int64;
#define lch(x) ((x) << 1)
#define rch(x) ((x) << 1 | 1)
#define avg(x, y) (((x) + (y)) >> 1)
inline int min(int a, int b)
{
    return a < b ? a : b;
}
inline int max(int a, int b) { return a > b ? a : b; }
const int N = 100010;
int64 sum[N << 2], add[N << 2], a[N];
void build(int k, int l, int r)
{
    if (l + 1 == r) return void(sum[k] = a[l]);
    int m = avg(l, r);
    build(lch(k), l, m);
    build(rch(k), m, r);
    sum[k] += sum[lch(k)] + sum[rch(k)];
}
void modify(int k, int l, int r, int x, int y, int v)
{
    if (x <= l && r <= y) return void(add[k] += v);
    sum[k] += (min(r, y) - max(l, x)) * v;
    int m = avg(l, r);
    if (x < m) modify(lch(k), l, m, x, y, v);
    if (y > m) modify(rch(k), m, r, x, y, v);
}
int64 query(int k, int l, int r, int x, int y)
{
    if (x <= l && r <= y) return sum[k] + (r - l) * add[k];
    int m = avg(l, r);
    return (min(r, y) - max(l, x)) * add[k] +
           (x < m ? query(lch(k), l, m, x, y) : 0) +
           (y > m ? query(rch(k), m, r, x, y) : 0);
}
int main()
{
    int n, m, op1, op2, op3;
    char op[2];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%lld", a + i);
    build(1, 0, n);
    while (m--)
    {
        scanf("%s%d%d", op, &op1, &op2);
        if (op[0] == 'Q')
            printf("%lld\n", query(1, 0, n, op1 - 1, op2));
        else
            scanf("%d", &op3), modify(1, 0, n, op1 - 1, op2, op3);
    }
    return 0;
}