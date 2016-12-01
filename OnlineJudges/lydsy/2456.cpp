#include <cstdio>  
int n, x, t, tot;
int main()
{
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        if (tot == 0) { t = x; tot = 1; }
        else if (t == x) tot++;
        else tot--;
    }
    printf("%d", t);
    return 0;
}