#include <cctype>
#include <cstdio>
inline void readInt(int& x)
{
    x = 0;
    static int ch;
    while (!isdigit(ch = getchar()));
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
}
int table[5][5] = {{0, 0, 1, 1, 0},
                   {1, 0, 0, 1, 0},
                   {0, 1, 0, 0, 1},
                   {0, 0, 1, 0, 1},
                   {1, 1, 0, 0, 0}};
int n, na, nb, a[201], b[201], sa, sb;
int main()
{
    readInt(n), readInt(na), readInt(nb);
    for (int i = 0; i < na; i++) readInt(a[i]);
    for (int i = 0; i < nb; i++) readInt(b[i]);
    for (int i = 0; i < n; i++)
        sa += table[a[i%na]][b[i%nb]],
        sb += table[b[i%nb]][a[i%na]];
    printf("%d %d", sa, sb);
    return 0;
}