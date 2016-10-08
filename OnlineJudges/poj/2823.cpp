#include <cstdio>
#include <deque>
#include <utility>
using namespace std;
deque<pair<int, int> > q;
int a[1000010];
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && q.back().first >= a[i]) q.pop_back();
        q.push_back(make_pair(a[i], i));
    }
    printf("%d ", q.front());
    for (int i = k; i < n; i++)
    {
        while (!q.empty() && q.back().first >= a[i]) q.pop_back();
        q.push_back(make_pair(a[i], i));
        while (q.size() > 0 && q.front().second < i - k + 1) q.pop_front();
        printf("%d ", q.front());
    }
    q.clear();
    putchar('\n');
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && q.back().first <= a[i]) q.pop_back();
        q.push_back(make_pair(a[i], i));
    }
    printf("%d ", q.front());
    for (int i = k; i < n; i++)
    {
        while (!q.empty() && q.back().first <= a[i]) q.pop_back();
        q.push_back(make_pair(a[i], i));
        while (q.size() > 0 && q.front().second < i - k + 1) q.pop_front();
        printf("%d ", q.front());
    }
    return 0;
}