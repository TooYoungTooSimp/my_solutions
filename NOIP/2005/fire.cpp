#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n,a[50001][2];
int seq[50001],w[50001];
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d%d",&a[i][0],&a[i][1]);
    int x=0,ans1,ans2;
    for(int i=1; i<=n; i++) x^=a[i][0],x^=a[i][1];
    if(x) printf("-1");
    else
    {
        seq[0]=1,seq[1]=a[1][0];
        for(int i=2; i<n; i++) seq[i]=a[seq[i-1]][seq[i-2]==a[seq[i-1]][0]];
        if(seq[n-1]!=a[1][1]) printf("-1");
        else
        {
            memset(w,0,sizeof(w));
            for(int i=0; i<n; i++)
                w[(seq[i]-i+n)%n]++;
            ans1=*max_element(w,w+n);
            reverse(seq,seq+n);
            memset(w,0,sizeof(w));
            for(int i=0; i<n; i++)
                w[(seq[i]-i+n)%n]++;
            ans2=*max_element(w,w+n);
            printf("%d",n-max(ans1,ans2));
        }
    }
    return 0;
}
