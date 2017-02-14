#include <cstdio>
#include <cstring>
char s[1000010];
int next[1000010], n, k, len;
int main()
{
    scanf("%d%d%s", &n, &k, s);
    next[0] = -1;
    len = strlen(s);
    for (int i = 1; i < len; ++i)
    {
        int j;
        for (j = next[i - 1]; j != -1 && s[j + 1] != s[i]; j = next[j]);
        if (s[j + 1] == s[i]) j++;
        next[i] = j;
    }
    for (int i = 0; i < len; ++i)
    {
        int p = i + 1, q = p / (i - next[i]);
        putchar(((p % (i - next[i]) == 0) ? (q / k >= q % k ? '1' : '0') : (q / k > q % k ? '1' : '0')) );
    }
    return 0;
}