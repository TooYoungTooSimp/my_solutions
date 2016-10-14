#include <cstdio>
#include <cmath>
int a0,a1,b0,b1;
inline int gcd(int a,int b)
{
    int t;
    while(b) t=a%b,a=b,b=t;
    return a;
}
#define lcm(a,b) ((a)/gcd((a),(b))*(b))
int main()
{
    int n;
    scanf("%d", &n);
    for (int _ = 0,cnt=0; _ < n; _++,cnt=0)
    {
        scanf("%d%d%d%d", &a0,&a1,&b0,&b1);
        for(int x=int(sqrt(b1)); x; x--) if(b1%x==0)
            {
                if(gcd(x,a0)==a1&&lcm(x,b0)==b1) cnt++;
                if(x*x!=b1&&gcd(b1/x,a0)==a1&&lcm(b1/x,b0)==b1) cnt++;
            }
        printf("%d\n",cnt);
    }
    return 0;
}
