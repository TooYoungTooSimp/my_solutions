#include <bits/stdc++.h>
using namespace std;
int a[205];
int Log(int x)
{
    for (int i = 0;; i++)
        if ((1 << i) > x + 1)
            return i;
    return -1;
}
int main()
{
    int n;
    double k, c;
    scanf("%d%lf%lf", &n, &k, &c);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    sort(a, a + n);
    reverse(a, a + n);
    int sum = 0;
    double ans = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    for (int i = 0; i < n; i++) ans += a[i] * (Log(i) * k + c);
    printf("%.3lf", ans / sum);
    return 0;
}