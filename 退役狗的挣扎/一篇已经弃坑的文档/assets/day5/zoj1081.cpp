#include <cstdio>
#define C const
#define I inline
struct P
{
    int x, y;
    P() {}
    P(int _x, int _y) { x = _x, y = _y; }
} a[105];
I P operator+(C P &L, C P &R) { return P(L.x + R.x, L.y + R.y); }
I P operator-(C P &L, C P &R) { return P(L.x - R.x, L.y - R.y); }
I int cross(C P &L, C P &R) { return L.x * R.y - L.y * R.x; }
I int dot(C P &L, C P &R) { return L.x * R.x + L.y * R.y; }
I bool check(C P &p, C P &u, C P &v)
{
    return cross(u - p, v - p) == 0 && dot(u - p, v - p) <= 0;
}
int main()
{
    for (int n, m, T = 1; (scanf("%d", &n), n) && scanf("%d", &m); T++)
    {
        if (T > 1) putchar('\n');
        printf("Problem %d:\n", T);
        for (int i = 0; i < n; i++)
            scanf("%d%d", &a[i].x, &a[i].y);
        a[n] = a[0];
        while (m--)
        {
            P p;
            scanf("%d%d", &p.x, &p.y);
            bool flag = false;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (flag = check(p, a[i], a[i + 1])) break;
                int d1 = a[i].y - p.y, d2 = a[i + 1].y - p.y,
                    d = cross(a[i] - p, a[i + 1] - p);
                cnt += (d >= 0 && d1 < 0 && d2 >= 0) || (d <= 0 && d1 >= 0 && d2 < 0);
            }
            puts(flag || (cnt & 1) ? "Within" : "Outside");
        }
    }
    return 0;
}