#include <cstdio>
int main()
{
	long long n;
	scanf("%I64d", &n);
	n == 1 || n == 2 ? printf("-1") : n & 1 ? printf("%I64d %I64d", (n*n - 1) / 2, (n*n + 1) / 2) : printf("%I64d %I64d", (n / 2)*(n / 2) + 1, (n / 2)*(n / 2) - 1);
	return 0;
}
