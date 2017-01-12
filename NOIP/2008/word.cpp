#include <cstdio>
char buffer[100];
int cnt[127], maxn, minn;
int main()
{
    fread(buffer, 1, 100, stdin);
    for (char *ptr = buffer; ptr - buffer < 100; ptr++)
        cnt[*ptr]++;
    maxn = 0, minn = 0x3f3f3f3f;
    for (char i = 'a'; i <= 'z'; i++)
        if (cnt[i])
        {
            if (cnt[i] > maxn) maxn = cnt[i];
            if (cnt[i] < minn) minn = cnt[i];
        }
    bool flag = (maxn - minn > 1);
    for (int i = 2; i < maxn - minn && flag; i++) flag = ((maxn - minn) % i != 0);
    if (flag)
    {
        puts("Lucky Word");
        printf("%d", maxn - minn);
    }
    else
    {
        puts("No Answer");
        putchar('0');
    }
    return 0;
}
