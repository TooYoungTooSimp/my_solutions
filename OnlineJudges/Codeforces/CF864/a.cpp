#include <algorithm>
#include <cstdio>
int n, arr[100];
int main()
{
    scanf("%d", &n);
    for (int i = n; i--;)
        scanf("%d", arr + i);
    std::sort(arr, arr + n);
    if (arr[0] == arr[(n >> 1) - 1] && arr[n >> 1] == arr[n - 1] && arr[0] != arr[n - 1])
        printf("YES\n%d %d", arr[0], arr[n - 1]);
    else
        puts("NO");
    return 0;
}