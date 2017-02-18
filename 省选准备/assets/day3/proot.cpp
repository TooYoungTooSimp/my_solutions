#include <cstdio>
typedef unsigned long long u64;
const size_t MAXN = 1 << 16 | 1;
bool notprime[MAXN];
int prime[MAXN], pcnt, x;
inline u64 fast_pow(u64 a, u64 b, u64 m)
{
    u64 ret = 1;
    for (; b; a = a * a % m, b >>= 1)
        if (b & 1)
            ret = ret * a % m;
    return ret;
}
int main()
{
    for (size_t i = 2; i < MAXN; i++)
        if (!notprime[i] && (prime[pcnt++] = int(i)))
            for (size_t j = i * i; j < MAXN; j += i)
                notprime[j] = true;
    while (~scanf("%d", &x))
        for (int a = 2, flag = 0; flag == 0; a++)
        {
            flag = 1;
            for (int i = 0, k = x - 1; i < pcnt && k > 1 && flag; i++)
                if (k % prime[i] == 0)
                {
                    flag = fast_pow(a, (x - 1) / prime[i], x) != 1;
                    while (k % prime[i] == 0)
                        k /= prime[i];
                }
            if (flag)
                printf("%d\n", a);
        }
    return 0;
}