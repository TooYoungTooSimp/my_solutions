//抄的题解，谁告诉我这个check到底是什么意思
#include <cstdio>
int n, m, a[51];
bool check(int x)
{
    int cnt = m < x ? m : x;
    for (int i = 0; i < n; i++)
        if (a[i] < x)
        {
            cnt -= x - a[i];
            if (cnt < 0) return false;
        }
    return true;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    int l = 0, r = 0x3f3f3f3f, mid;
    while (l < r) check(mid = (l + r) >> 1) ? l = mid + 1 : r = mid;
    printf("%d", l - 1);
    return 0;
}