#include <cstdio>
#include <cstring>
const int mod = 1000000007;
char A[1002], B[202];
int N, M, K, dp[2][201][201][2];
#define rep(x, l, h) for (int x = l; x <= h; x++)
int main()
{
    scanf("%d%d%d%s%s", &N, &M, &K, A + 1, B + 1);
    dp[0][0][0][0] = dp[1][0][0][0] = 1;
    rep(i, 1, N) rep(j, 1, M) rep(k, 1, K) if (A[i] != B[j]) dp[i & 1][j][k][0] = dp[(i - 1) & 1][j][k][0], dp[i & 1][j][k][1] = 0;
    else dp[i & 1][j][k][1] = (dp[(i - 1) & 1][j - 1][k - 1][0] + dp[(i - 1) & 1][j - 1][k][1]) % mod,
                dp[i & 1][j][k][0] = (dp[(i - 1) & 1][j][k][0] + dp[i & 1][j][k][1]) % mod;
    printf("%d", dp[N & 1][M][K][0]);
    return 0;
}