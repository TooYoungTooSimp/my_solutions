#include<cstdio>
#include<cstring>

const int mt = 1e6 + 5;

char x[mt], y[mt];
int m, n;

template<typename T>
int cnt(T *x, int m, T *y, int n)
{
	if (m > n) return 0;
	if (m == 1)
	{
		int ret = 0;
		for (int i = 0; i < n; ++i)
		{
			if (y[i] == x[0]) ++ret;
		}
		return ret;
	}
	T *next = new T[n]();
	int i = 0;
	int j = next[0] = -1;
	while (i < m)
	{
		if (-1 == j or y[i] == y[j]) next[++i] = ++j;
		else j = next[j];
	}
	i = 0;
	j = 0;
	int ans = 0;
	while (i < n and j < m)
	{
		if (-1 == j or y[i] == x[j]) ++i, ++j;
		else j = next[j];
		if (j == m)
			++ans, i -= j - 1, j = -1;
	}
	delete next;
	return ans;
}


int main(const int argc, const char *argv[])
{
	int t;
	scanf("%d", &t);
	while (t --> 0)
	{
		scanf("%s", y);
		scanf("%s", x);
		printf("%d\n", cnt(x, strlen(x), y, strlen(y)));
	}
	return 0;
}
