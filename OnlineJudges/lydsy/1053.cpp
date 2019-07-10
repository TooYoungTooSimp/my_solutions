#include <bits/stdc++.h>
using namespace std;
long long pr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int len = sizeof(pr) / sizeof(*pr);
long long ans, mx, cmx;
void dfs(int st, long long cur, int cnt)
{
    if (cnt > cmx || (cnt == cmx && ans > cur)) ans = cur, cmx = cnt;
    if (st == len) return;
    for (int i = 0; cur <= mx; cur *= pr[st], i++)
        dfs(st + 1, cur, cnt * (i + 1));
}
int main()
{
    cin >> mx;
    dfs(0, 1, 1);
    cout << ans;
    return 0;
}