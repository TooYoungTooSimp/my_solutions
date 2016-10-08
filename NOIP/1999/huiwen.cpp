#include <cstdio>
#include <cstdlib>
#include <cstring>
#ifdef i64toa
#undef i64toa
#endif
#ifdef _MSC_VER
#define i64toa _i64toa
#else
#define i64toa __gcc_i64toa
void __gcc_i64toa(long long _Value, char* _Buffer, int _Radix)
{
    int x;
    char* _It = _Buffer;
    while (_Value)
    {
        x = _Value%_Radix;
        _Value /= _Radix;
        *_It++ = (x > 10 ? x - 10 + 'A' : x + '0');
    }
    int i = 0, j = _It - _Buffer - 1, e = j + 1;
    while (i < j)
        _Buffer[e] = _Buffer[i],
        _Buffer[i] = _Buffer[j],
        _Buffer[j] = _Buffer[e],
        i++, j--;
    _Buffer[e] = '\0';
}
#endif
int n;
char buffer[1000];
bool check(long long x)
{
    i64toa(x, buffer, n);
    int i = 0, j = strlen(buffer) - 1;
    while (i < j)
        if (buffer[i++] != buffer[j--])
            return false;
    return true;
}
void add(long long& x)
{
    i64toa(x, buffer, n);
    int i = 0, j = strlen(buffer) - 1, e = j + 1;
    while (i < j)
        buffer[e] = buffer[i],
        buffer[i] = buffer[j],
        buffer[j] = buffer[e],
        i++, j--;
    buffer[e] = '\0';
    x += strtoll(buffer, NULL, n);
}
int main()
{
    scanf("%d", &n);
    scanf("%s", buffer);
    long long num = strtoll(buffer, NULL, n);
    for (int i = 0; i <= 30; i++)
        if (check(num))
        {
            printf("STEP=%d", i);
            return 0;
        }
        else
            add(num);
    puts("Impossible!");
    return 0;
}