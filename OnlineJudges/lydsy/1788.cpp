#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 50;
int X[N], A[N], B[N];
int main()
{
    int n;
    char op[2];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", X + i);
    for (int i = 1; i <= n; i++)
        scanf("%d", A + i);
    scanf("%s", op);
    for (int i = 1; i <= n; i++)
        scanf("%d", B + i);
    if (*op == '+')
        for (int i = n; i; i--)
            A[i] += B[i];
    else
        for (int i = n; i; i--)
            A[i] -= B[i];
    for (int i = n; i; i--)
    {
        while (A[i] < 0)
        {
            A[i - 1]--;
            A[i] += X[i];
        }
        while (A[i] >= X[i])
        {
            A[i - 1]++;
            A[i] -= X[i];
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", A[i]);
    return 0;
}