#include <cstdio>
inline int max(int a, int b) { return a > b ? a : b; }
int N, m, G[60][2], W[60], C[60], f[3333];
bool M[60];
int main()
{
    scanf("%d%d", &N, &m);
    N /= 10;
    for (int i = 1, v, p, q; i <= m; i++)
    {
        scanf("%d%d%d", &v, &p, &q);
        C[i] = p * (W[i] = v / 10);
        q ? G[q][0] ? G[q][1] = i : G[q][0] = i : M[i] = true;
    }
    for (int i = 1; i <= m; i++)
        if (M[i])
            for (int j = N, w, c; j; j--)
            {
                w = W[i], c = C[i];
                if (j >= w) f[j] = max(f[j], f[j - w] + c);
                w = W[i] + W[G[i][0]], c = C[i] + C[G[i][0]];
                if (j >= w) f[j] = max(f[j], f[j - w] + c);
                w = W[i] + W[G[i][1]], c = C[i] + C[G[i][1]];
                if (j >= w) f[j] = max(f[j], f[j - w] + c);
                w = W[i] + W[G[i][0]] + W[G[i][1]], c = C[i] + C[G[i][0]] + C[G[i][1]];
                if (j >= w) f[j] = max(f[j], f[j - w] + c);
            }
    printf("%d", f[N] * 10);
    return 0;
}