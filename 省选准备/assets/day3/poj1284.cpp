#include <cstdio>
const int N = 1 << 16 | 1;
int phi[N];
int main()
{
    for (int i = 2; i < N; i++) if (!phi[i])
        for (int j = i; j < N; j += i)
        {
            if (!phi[j]) phi[j] = j;
            phi[j] = phi[j] / i * (i - 1);
        }
    for (int p; ~scanf("%d", &p);)
        printf("%d\n", phi[p - 1]);
    return 0;
}