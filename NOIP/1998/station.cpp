#include <cstdio>
int p[1001], u[1001];
int main()
{
	int a, n, m, x;
	scanf("%d%d%d%d", &a, &n, &m, &x);
	int j = 0;
	while (p[n - 1] < m)
	{
		u[1] = p[2] = a;
		u[2] = j++;
		for (int i = 3; i < n; i++)
			u[i] = u[i - 1] + u[i - 2],
			p[i] = p[i - 1] + u[i - 2];
	}
	printf("%d", p[x]);
	return 0;
}
