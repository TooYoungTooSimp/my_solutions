#include <cmath>
#include <cstdio>
#define f(x) (((a * (x) + b) * (x) + c) * (x) + d)
const double eps = 1e-6;
double a, b, c, d, l, r, m, fl, fr, fm;
int main()
{
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    for (int i = -100; i < 100; i++)
    {
        l = i, r = i + 1 - eps;
        if (f(l) * f(r) > eps)
            continue;
        else
            while (r - l > eps)
            {
                m = (l + r) / 2;
                fl = f(l), fr = f(r), fm = f(m);
                if (abs(fl) < eps) {
                    m = l;
                    break;
                }
                else if (fl * fm < 0)
                    r = m;
                else
                    l = m;
            }
        printf("%.2f ", m);
    }
    return 0;
}