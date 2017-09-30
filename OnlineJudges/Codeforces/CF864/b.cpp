#include <algorithm>
#include <cctype>
#include <cstdio>
#include <set>
int n;
char str[201];
int main()
{
    scanf("%d%s", &n, str);
    std::set<char> S;
    int ans = 0;
    for (int pos = 0; pos <= n; pos++)
        if (islower(str[pos]))
            S.insert(str[pos]);
        else
            ans = std::max(ans, static_cast<int>(S.size())), S.clear();
    printf("%d", ans);
    return 0;
}