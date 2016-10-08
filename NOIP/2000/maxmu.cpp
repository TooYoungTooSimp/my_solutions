#include <cstdio>
template<typename T> inline
T max(T a, T b) { return a > b ? a : b; }
int n, k;
long long a[41][41], f[41][41];
char buffer[41];
int main()
{
	scanf("%d%d%s", &n, &k, buffer + 1);
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++)
			if (i == j)
				a[i][j] = buffer[i] - '0';
			else
				a[i][j] = a[i][j - 1] * 10 + buffer[j] - '0';
	for (int i = 1; i <= n; i++)
		f[i][0] = a[1][i];
	for (int l = 1; l <= k; l++)
		for (int i = l + 1; i <= n; i++)
			for (int j = l; j < i; j++)
				f[i][l] = max(f[i][l], f[j][l - 1] * a[j + 1][i]);
	printf("%lld", f[n][k]);
	return 0;
}