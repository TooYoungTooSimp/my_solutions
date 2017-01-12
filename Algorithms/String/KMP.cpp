/*#include <cstdio>
#include <cstring>
char s[100000], p[100000];
int next[100000];
void getNext(char* P)
{
    int lenP = strlen(P);
    next[0] = -1;
    int k = -1, i = 0;
    while (i < lenP - 1)
        if (k == -1 || P[k] == P[i])
            i++, k++, next[i] = (p[i] == p[k]) ? next[k] : k;
        else k = next[k];
}
int match(char* S, char* P)
{
    int lenS = strlen(S), lenP = strlen(P), i = 0, j = 0;
    while (i < lenS && j < lenP)
        if (j == -1 || S[i] == P[j])
            i++, j++;
        else
            j = next[j];
    return j == lenP ? i - j : -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s", p, s);
        getNext(p);
        char* str = s;
        int pos = match(str, p), ans = 0;
        while (pos != -1)
        {
            ans++;
            str += pos + 1;
            pos = match(str, p);
        }
        printf("%d\n", ans);
    }
    return 0;
}*/
#include <cstdio>
#include <cstring>
using namespace std;
const int mt = 1e6 + 5;
char x[mt], y[mt], next[mt];
int m, n;
void pre()
{
    int i = 0, j = next[0] = -1;
    while (i != m)
    {
        if (-1 == j || y[i] == y[j])
            next[++i] = ++j;
        else
            j = next[j];
    }
}
int cnt()
{
    pre();
    int i = 0, j = 0, ans = 0;
    while (i != n && j != m)
    {
        if (-1 == j || y[i] == x[j])
            i++, j++;
        else
            j = next[j];
        if (j == m)
            ans++, i -= j - 1, j = -1;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", x);
        scanf("%s", y);
        m = strlen(x), n = strlen(y);
        //cout<<m<<endl<<n<<endl;
        //cout<<x<<endl<<y<<endl;
        printf("%d\n", cnt());
    }
    return 0;
}