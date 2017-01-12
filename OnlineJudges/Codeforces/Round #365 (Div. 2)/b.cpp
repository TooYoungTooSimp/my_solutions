#include <cstdio>
int c[100000];
bool iscap[100000];
int n, k, sum;
long long ans;
int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", c + i), sum += c[i];
    return 0;
}