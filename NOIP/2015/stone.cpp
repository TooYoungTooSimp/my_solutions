#include <cstdio>
int L, N, M, st[50001], l, r, m;
bool check(int x)
{
    int cnt = 0, last = 0;
    for (int i = 0; i <= N; i++) st[i] - last < x ? cnt++ : last = st[i];
    return cnt <= M;
}
int main()
{
    scanf("%d%d%d", &L, &N, &M);
    for (int i = 0; i < N; i++) scanf("%d", &st[i]);
    st[N] = L;
    for (l = 0, r = L + 1; l < r;) check(m = (l + r) >> 1) ? l = m + 1 : r = m;
    printf("%d", l - 1);
    return 0;
}