#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
string ss[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ss[i];
    sort(ss, ss + n, [](const string &l, const string &r) {
        int ls = l.size(), rs = r.size();
        int maxl = max(ls, rs) * 2;
        for (int i = 0; i < maxl; i++)
            if (l[i % ls] < r[i % rs])
                return false;
            else if (l[i % ls] > r[i % rs])
                return true;
        return true;
    });
    for (int i = 0; i < n; i++)
        cout << ss[i];
    return 0;
}
