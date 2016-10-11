#include <cstdio>
#include <cstring>
#include <cassert>
int a[51][51],f[110][51][51],m,n;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    memset(f,-1,sizeof(f));
    scanf("%d%d",&m,&n);
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            scanf("%d",&a[i][j]);
    f[1][1][1]=0;
    for(int i=1; i<=n+m; i++)
        for(int j=1; j<=m&&j<=i; j++)
            for(int k=1; k<=m&&k<=i; k++)
                if(j!=k||i==n+m)
                {
                    f[i][j][k]=max(f[i][j][k],f[i-1][j][k]);
                    f[i][j][k]=max(f[i][j][k],f[i-1][j-1][k-1]);
                    f[i][j][k]=max(f[i][j][k],f[i-1][j-1][k]);
                    f[i][j][k]=max(f[i][j][k],f[i-1][j][k-1]);
                    f[i][j][k]+=a[j][i-j+1]+a[k][i-k+1];
                }
    printf("%d",f[n+m][m][m]);
    return 0;
}
