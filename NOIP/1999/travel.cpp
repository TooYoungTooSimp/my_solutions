#include <cstdio>
int n;
double d[1000], p[1000], c, res, dpl, tmp, cost;
int main()
{
    scanf("%lf%lf%lf%lf%d", &tmp, &c, &dpl, &p[0], &n);
    d[n + 1] = tmp, p[n + 1] = 0;
    double maxlength = c*dpl;
    for (int i = 1; i <= n; i++)
        scanf("%lf%lf", d + i, p + i);
    for (int i = 0; i <= n;)
    {
        if (maxlength < d[i + 1] - d[i]) { puts("No Solution"); goto ret; }
        int minid = i;
        for (int j = i + 1; d[i] + maxlength >= d[j] && j <= n + 1 && minid == i; j++)
            if (p[j] < p[i])
                minid = j;
        if (i == minid)
            cost += (c - res)*p[i], res = c - (d[i + 1] - d[i]) / dpl, i++;
        else
        {
            if (res < (d[minid] - d[i]) / dpl)
                cost += ((d[minid] - d[i]) / dpl - res)*p[i], res = 0;
            else
                res -= (d[minid] - d[i]) / dpl;
            i = minid;
        }
    }
    printf("%.2f", cost);
ret:
    return 0;
}