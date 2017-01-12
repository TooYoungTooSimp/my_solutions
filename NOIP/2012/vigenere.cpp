#include <cctype>
#include <cstdio>
#include <cstring>
char key[101], str[1001];
int lkey, lstr;
int main()
{
    scanf("%s%s", key, str);
    lkey = strlen(key), lstr = strlen(str);
    for (int i = 0, j = 0; i < lstr; ++i, (++j) %= lkey)
        key[j] = isupper(str[i]) ? toupper(key[j]) : tolower(key[j]),
        str[i] = (isupper(str[i]) ? 'A' : 'a') + str[i] - key[j] + (str[i] < key[j] ? 26 : 0);
    puts(str);
    return 0;
}