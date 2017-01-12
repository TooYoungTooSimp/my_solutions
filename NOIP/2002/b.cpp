#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
int n, ans;
string a, b, cura, curb;
unordered_map<string, int> H1, H2;
pair<string, string> rules[6];
vector<string> tran(const string &org, const pair<string, string> rule)
{
    vector<string> arr;
    string s;
    for (string::size_type start_pos = 0; (start_pos = (s = org).find(rule.first, start_pos)) != string::npos; start_pos += rule.first.size())
        arr.push_back(s.replace(start_pos, rule.first.size(), rule.second));
    return arr;
}
pair<string, string> operator-(pair<string, string> org)
{
    swap(org.first, org.second);
    return org;
}
int main()
{
    cin >> a >> b;
    while (cin >> rules[n].first >> rules[n].second) n++;
    queue<string> qa, qb;
    qa.push(a);
    qb.push(b);
    H1[a] = H2[b] = 0;
    bool flag = false;
    while (qa.size() + qb.size())
    {
        if (!qa.empty())
        {
            cura = qa.front();
            int ida = H1[cura];
            qa.pop();
            if (ida > 5) break;
            for (int i = 0; i < n; i++)
            {
                vector<string> nxt = tran(cura, rules[i]);
                for (vector<string>::iterator ite = nxt.begin(); ite != nxt.end(); ++ite)
                    if (H1.count(*ite) == 0)
                    {
                        H1[*ite] = ida + 1;
                        if (H2.count(*ite))
                        {
                            flag = true;
                            ans = H2[*ite] + ida + 1;
                            break;
                        }
                        qa.push(*ite);
                    }
            }
        }
        if (!qb.empty())
        {
            curb = qb.front();
            int idb = H2[curb];
            qb.pop();
            if (idb > 5) break;
            for (int i = 0; i < n; i++)
            {
                vector<string> nxt = tran(curb, -rules[i]);
                for (vector<string>::iterator ite = nxt.begin(); ite != nxt.end(); ++ite)
                    if (H2.count(*ite) == 0)
                    {
                        H2[*ite] = idb + 1;
                        if (H1.count(*ite))
                        {
                            flag = true;
                            ans = H1[*ite] + idb + 1;
                            break;
                        }
                        qb.push(*ite);
                    }
            }
        }
    }
    (flag && ans <= 10) ? printf("%d", ans) : puts("NO ANSWER!");
    return 0;
}