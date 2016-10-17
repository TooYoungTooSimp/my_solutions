#include <cstdio>
inline int max(int a,int b)
{
    return a>b?a:b;
}
int n,m,a[360],cnt[4],f[40][40][40][40];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    for(int i=0,x; i<m; i++)
    {
        scanf("%d",&x);
        cnt[x-1]++;
    }
    for(int i=0; i<=cnt[0]; i++)
        for(int j=0; j<=cnt[1]; j++)
            for(int k=0; k<=cnt[2]; k++)
                for(int l=0; l<=cnt[3]; l++)
                {
                    if(i) f[i][j][k][l]=max(f[i][j][k][l],f[i-1][j][k][l]);
                    if(j) f[i][j][k][l]=max(f[i][j][k][l],f[i][j-1][k][l]);
                    if(k) f[i][j][k][l]=max(f[i][j][k][l],f[i][j][k-1][l]);
                    if(l) f[i][j][k][l]=max(f[i][j][k][l],f[i][j][k][l-1]);
                    f[i][j][k][l]+=a[i+j+j+k+k+k+l+l+l+l];
                }
    printf("%d",f[cnt[0]][cnt[1]][cnt[2]][cnt[3]]);
    return 0;
}
