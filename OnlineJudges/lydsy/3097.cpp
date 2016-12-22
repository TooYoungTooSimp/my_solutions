#include <cstdio>
int n = 1, l;
char s[100001];
int main()
{
    s[0] = 'a';
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < n; j++)
            s[j + n] = s[j] == 'a' ? 'b' : 'a';
        n <<= 1;
    }
    l = n >> 1;
    s[n++] = 'a';
    for (int i = 1; i < l; i++) s[n++] = 'a';
    s[n++] = 'b';
    for (int i = 1; i < l; i++) s[n++] = 'a';
    printf("8192 2048\n%s", s);
    return 0;
}