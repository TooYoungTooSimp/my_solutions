#include <algorithm>
#include <cstdio>
#include <set>
#include <utility>
using namespace std;
int n, m, a[100001], nxt[100001][2], s, x, len[100001][2];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);
    set<pair<int, int>> S;
    for (int i = 1; i <= n; i++) S.insert(make_pair(a[i], i));
    pair<int, int> tmp[4];
    for (int i = 1; i <= n; i++)
    {
        auto ite = S.find(make_pair(a[i], i));
        _ASSERT(ite != S.end());
        for (int j = 0; j < 4; j++)
            tmp[j].first = 0x3f3f3f3f, tmp[j].second = 0;
        int k = 0;
        auto _ite = ite;
        advance(_ite, -1);
        if (_ite != S.end())
        {
            tmp[k].first = abs(_ite->first - ite->first);
            tmp[k].second = _ite->second;
            k++;
            advance(_ite, -1);
            if (_ite != S.end())
                tmp[k].first = abs(_ite->first - ite->first),
                tmp[k].second = _ite->second, k++;
        }
        _ite = ite;
        advance(_ite, 1);
        if (_ite != S.end())
        {
            tmp[k].first = abs(_ite->first - ite->first);
            tmp[k].second = _ite->second;
            k++;
            advance(_ite, 1);
            if (_ite != S.end())
                tmp[k].first = abs(_ite->first - ite->first),
                tmp[k].second = _ite->second, k++;
        }
        S.erase(ite);
        sort(tmp, tmp + k, [&](const pair<int, int> &l, const pair<int, int> &r) {
            if (l.first < r.first) return true;
            if (l.first > r.first) return false;
            return a[l.second] < a[r.second];
        });
        nxt[i][1] = tmp[0].second;
        nxt[i][0] = tmp[1].second;
    }
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
        for (int p = 0, j = i;; j = nxt[j][p], p ^= 1)
        {
            if (nxt[j][0] == 0 || nxt[j][1] == 0) break;
            len[i][p] += abs(a[j] - a[nxt[j][p]]);
            if (len[i][0] + len[i][1] > x) {
                len[i][p] -= abs(a[j] - a[nxt[j][p]]);
                break;
            }
        }
    struct
    {
        int id;
        double val;
    } ans;
    ans.id = -1, ans.val = 1e20;
    for (int i = 1; i <= n; i++)
        if (len[i][1] != 0 && ans.val > 1.0 * len[i][0] / len[i][1])
            ans.val = 1.0 * len[i][0] / len[i][1], ans.id = i;
    printf("%d\n", ans.id);
    memset(len, 0, sizeof(len));
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &s, &x);
        for (int p = 0, j = s;; j = nxt[j][p], p ^= 1)
        {
            if (nxt[j][p] == 0) break;
            len[s][p] += abs(a[j] - a[nxt[j][p]]);
            if (len[s][0] + len[s][1] > x) {
                len[s][p] -= abs(a[j] - a[nxt[j][p]]);
                break;
            }
        }
        printf("%d %d\n", len[s][0], len[s][1]);
    }
    return 0;
}