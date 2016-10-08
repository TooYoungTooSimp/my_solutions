#include <cstdio>
inline int max(int lhs, int rhs) { return lhs > rhs ? lhs : rhs; }
int a[400], f[400][400];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    a[n] = a[0];
    for (int start = 0; start < n; start++)
        for (int end = start; end < n; end++)
            for (int split = start; split <= end; split++)
            {

            }
    return 0;
}