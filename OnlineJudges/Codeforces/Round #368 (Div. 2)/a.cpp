#include <cstdio>
#include <cctype>
int main()
{
	int n, m;
	char ch;
	bool flag = false;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n*m; i++)
	{
		while (!isalpha(ch = getchar()));
		ch = toupper(ch);
		if (ch == 'C' || ch == 'M' || ch == 'Y') { flag = true; break; }
	}
	printf(flag ? "#Color" : "#Black&White");
	return 0;
}