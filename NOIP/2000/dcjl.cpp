#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int used[100], n;
string strs[100];
string::size_type ans;
int check(const string& s1, const string& s2)
{
    string::size_type sz = min(s1.size(), s2.size());
    if (equal(s1.rbegin(), s1.rbegin() + sz, s2.rbegin()) && sz != max(s1.size(), s2.size())) return 0;
    else for (int i = 1; i < sz; i++)
        if (equal(s1.end() - i, s1.end(), s2.begin(), s2.begin() + i))
            return i;
    return 0;
}
void dfs(string s)
{
    ans = max(ans, s.size());
    for (int i = 0, pos; i < n; i++)
        if ((used[i] < 2) && (pos = check(s, strs[i])))
        {
            used[i]++;
            dfs(s + strs[i].substr(pos, strs[i].size() - pos));
            used[i]--;
        }
}
int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
        cin >> strs[i];
    for (int i = 0; i < n; i++)
        if (*strs[i].begin() == *strs[n].begin())
        {
            fill(used, used + 100, 0);
            used[i] = 1;
            dfs(strs[i]);
        }
    cout << ans;
    return 0;
}