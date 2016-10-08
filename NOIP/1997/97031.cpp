#include <cstdio>
#include <cstdlib>
#include <cctype>
const int L = 1 << 8;
char buffer[L], *S, *T;
#define initbuffer(); {T=(S=buffer)+fread(buffer,1,L,stdin); while(!isdigit(*T))T--;T++;}
#define getint() (S!=T?strtol(S,&S,10):-1)
int a[52][52];
struct
{
	int x, y;
} st[3200]; int top = 0;
int n, m;
void dfs(int i, int j)
{
	if (i == n&&j == m)
	{
		for (int ii = 0; ii < top - 1; ii++)
			printf("(%d,%d)->", st[ii].x, st[ii].y);
		printf("(%d,%d)", st[top - 1].x, st[top - 1].y);
		exit(0);
	}
	else
	{
		if (i + 2 <= n&&j + 1 <= m)
		{
			st[top].x = i + 2, st[top].y = j + 1;
			top++;
			dfs(i + 2, j + 1);
			top--;
		}
		if (i + 2 <= n&&j - 1 >= 1)
		{
			st[top].x = i + 2, st[top].y = j - 1;
			top++;
			dfs(i + 2, j - 1);
			top--;
		}
		if (i + 1 >= 0 && j + 2 <= m)
		{
			st[top].x = i + 1, st[top].y = j + 2;
			top++;
			dfs(i + 1, j + 2);
			top--;
		}
		if (i + 1 >= 0 && j - 2 >= 1)
		{
			st[top].x = i + 1, st[top].y = j - 2;
			top++;
			dfs(i + 1, j - 2);
			top--;
		}
	}
}
int main()
{
	initbuffer();
	n = getint(), m = getint();
	st[0].x = st[0].y = 1;
	top++;
	dfs(1, 1);
	puts("NO");
	return 0;
}
