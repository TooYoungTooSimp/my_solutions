#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
int n, m, a[502][502];
vector<pair<int, int>> segs;
vector<int> toSearch;
bool vis[1 << 18], lVis[1 << 9];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,-1,0,1 };
int que[1 << 18], head, tail;
int main()
{
    memset(a, 0x3f, sizeof(a));
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    a[1][0] = a[1][m + 1] = 0;
    for (int i = 1; i <= m; i++)
        if (a[1][i - 1] <= a[1][i] && a[1][i] >= a[1][i + 1])
            toSearch.push_back(i);
    a[1][0] = a[1][m + 1] = **a;
    for_each(toSearch.begin(), toSearch.end(), [&](int p) {
        memset(vis, 0, sizeof(vis));
        head = tail = 0;
        vis[que[tail++] = (1 << 9) + p] = true;
        int l = 1 << 9, r = 0;
        while (head < tail)
        {
            int x = que[head] >> 9, y = que[head] & 511; head++;
            if (x == n) l = min(l, y), r = max(r, y);
            for (int i = 0; i < 4; i++)
                if (!vis[((x + dx[i]) << 9) + (y + dy[i])] && a[x + dx[i]][y + dy[i]] < a[x][y])
                    vis[que[tail++] = ((x + dx[i]) << 9) + (y + dy[i])] = true;
        }
        segs.push_back(make_pair(l, r));
    });
    sort(segs.begin(), segs.end(), [](const decltype(segs)::value_type& seg1, const decltype(segs)::value_type& seg2) {
        return (seg1.first < seg2.first) || (seg1.first == seg2.first && seg1.second > seg2.second);
    });
    for_each(segs.begin(), segs.end(), [&](const decltype(segs)::value_type& s) {
        for (int i = s.first; i <= s.second; i++) lVis[i] = true;
    });
    int wCnt = (int)count(lVis + 1, lVis + m + 1, true);
    if (wCnt < m)
        printf("0\n%d", m - wCnt);
    else
    {
        int i = 0, last = 0, best, cnt = 0;
        while (last < m)
        {
            for (best = 0; i < segs.size() && segs[i].first <= last + 1; i++)
                best = max(best, segs[i].second);
            last = best;
            cnt++;
        }
        printf("1\n%d", cnt);
    }
    return 0;
}
