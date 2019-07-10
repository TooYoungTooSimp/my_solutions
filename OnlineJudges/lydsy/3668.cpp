#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 50;
unsigned T[N];
char op[N][4];
bool can[32];
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%s%u", op[i], T + i);
    for (int i = 0; i < 32; i++)
    {
        int x = 1;
        for (int j = 0; j < n; j++)
            switch (*op[j])
            {
            case 'A':
                x = x & (T[j] >> i) & 1;
                break;
            case 'O':
                x = x | (T[j] >> i) & 1;
                break;
            case 'X':
                x = x ^ (T[j] >> i) & 1;
                break;
            }
        can[i] = x;
    }
    unsigned ans = 0;
    for (int i = 0; i < 32; i++)
        if (can[i] && (ans | (1 << i)) <= m)
            ans |= 1 << i;
    for (int j = 0; j < n; j++)
        switch (*op[j])
        {
        case 'A':
            ans &= T[j];
            break;
        case 'O':
            ans |= T[j];
            break;
        case 'X':
            ans ^= T[j];
            break;
        }
    printf("%u", ans);
    return 0;
}
