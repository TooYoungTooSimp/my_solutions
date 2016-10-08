#include <cstdio>
#include <cstring>
int n, types, l, r, tmp, ans;
char str[100000];
int cnt[56];
bool has[56];
inline int min(int aa, int bb) { return (aa < bb ? aa : bb); }
inline int ch2int(char ch)
{
    if (ch >= 'a') return ch - 'a' + 26;
    else return ch - 'A';
}
int main()
{
    ans = 1 << 30;
    scanf("%d%s", &n, str);
    for (int i = 0; i < n; i++)
    {
        tmp = ch2int(str[i]);
        if (!has[tmp])
            types++, has[tmp] = true;
    }
    memset(has, 0, sizeof(has));
    while (types)
    {
        tmp = ch2int(str[r]);
        if (!has[tmp])
            types--, has[tmp] = true;
        cnt[tmp]++;
        r++;
    }
    for (; l < r; l++)
        if (--cnt[ch2int(str[l])] == 0) break;
    cnt[ch2int(str[l])]++;
    ans = min(ans, r - l);
    while (r < n)
    {
        cnt[ch2int(str[r])]++;
        if (str[l] == str[r])
        {
            for (; l < r; l++)
                if (--cnt[ch2int(str[l])] == 0) break;
            cnt[ch2int(str[l])]++;
            ans = min(ans, r - l + 1);
        }
        r++;
    }
    printf("%d", ans);
    return 0;
}