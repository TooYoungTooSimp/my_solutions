#include <cctype>
#include <cstdio>
inline void readint(int &x)
{
    int ch = x = 0;
    while (!isdigit(ch = getchar())) 0;
    for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
}
const int N = 200020;
int arr[N], cnt[N], n, ans;
bool used[N];
int main()
{
    readint(n);
    for (int i = 0; i < n; i++) readint(arr[i]), ans += cnt[arr[i]]++ > 0;
    printf("%d\n", ans);
    for (int i = 0, x = 1; i < n; i++)
        if (cnt[arr[i]] > 1)
        {
            while (cnt[x]) x++;
            if (arr[i] > x || used[arr[i]])
                cnt[arr[i]]--, cnt[arr[i] = x]++;
            else
                used[arr[i]] = true;
        }
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
