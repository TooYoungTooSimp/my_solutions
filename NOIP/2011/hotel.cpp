//http://blog.163.com/oi_boy/blog/static/209415175201263052124756/
//http://www.voidcn.com/blog/zzx2015/article/p-4501316.html
#include <cstdio>
int n, k, p, f, ans, a[50], b[50], s[50];
int main()
{
    scanf("%d%d%d", &n, &k, &p);
    for (int i = 1, c, v; i <= n; i++)
    {
        scanf("%d%d", &c, &v);
        if (v <= p) f = i;
        if (f >= s[c]) b[c] = a[c];
        ans += b[c];
        a[c]++;
        s[c] = i;
    }
    printf("%d", ans);
    return 0;
}
