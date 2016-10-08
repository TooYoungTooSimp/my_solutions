#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;
string ss[11][11];
int h[256];
inline void error()
{
	puts("ERROR!");
	exit(0);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> ss[i][j];
	memset(h, -1, sizeof(h));
	for (int i = 1, ans; i < n; i++)
	{
		ans = 0;
		for (int j = 1; j < n; j++)
			if (ss[i][j].size() > 1)
				ans++;
		if (h[(int)ss[i][0][0]] == -1) h[(int)ss[i][0][0]] = ans;
		if (h[(int)ss[i][0][0]] != ans) error();
	}
	for (int j = 1, ans; j < n; j++)
	{
		ans = 0;
		for (int i = 1; i < n; i++)
			if (ss[i][j].size() > 1)
				ans++;
		if (h[(int)ss[j][0][0]] != ans) error();
	}
	for (int i = 1; i < n; i++)
		printf("%c=%d ", ss[i][0][0], h[int(ss[i][0][0])]);
	printf("\n%d", n - 1);
	return 0;
}
