#include <cstdio>
#include <cstring>
int n,m,a[90];
struct bigint
{
    int data[80];
    void refresh()
    {
        for(int i=0; i<40; i++)
            data[i+1]+=data[i]/10,data[i]%=10;
    }
    bigint(int val=0)
    {
        memset(data,0,sizeof(data));
        data[0]=val;
        refresh();
    }
    bigint operator+=(const bigint& rhs)
    {
        for(int i=0; i<40; i++)
            data[i]+=rhs.data[i];
        refresh();
        return *this;
    }
    bigint operator+(const bigint& rhs)
    {
        bigint ret=*this;
        return ret+=rhs;
    }
    bigint operator*(const bigint& rhs)
    {
        bigint ret;
        for(int i=0; i<40; i++)
            for(int j=0; j<40; j++)
                ret.data[i+j]+=(data[i]*rhs.data[j]);
        ret.refresh();
        return ret;
    }
};
bigint max(const bigint& a,const bigint& b)
{
    int len1,len2;
    for(len1=40; len1>=0&&a.data[len1]==0; len1--);
    for(len2=40; len2>=0&&b.data[len2]==0; len2--);
    if(len1>len2) return a;
    if(len1<len2) return b;
    for(; len1+len2>=0; len1--,len2--)
        if(a.data[len1]>b.data[len2]) return a;
        else if(a.data[len1]<b.data[len2]) return b;
    return b;
}
bigint _2n[90],f[90][90],tmp,ans;
int main()
{
    scanf("%d%d",&n,&m);
    _2n[0]=1;
    for(int i=1; i<=m; i++) _2n[i]=_2n[i-1]*2;
    for(int x=1; x<=n; x++)
    {
        tmp=0;
        memset(f,0,sizeof(f));
        memset(a,0,sizeof(a));
        for(int i=1; i<=m; i++)
            scanf("%d",&a[i]);
        for(int i=1; i<=m; i++)
        {
            f[i][0]=f[i-1][0]+_2n[i]*a[i];
            f[0][i]=f[0][i-1]+_2n[i]*a[m-i+1];
        }
        for(int i=1; i<=m; i++)
            for(int j=1; j<=m-i; j++)
                f[i][j]=max(f[i-1][j]+_2n[i+j]*a[i],f[i][j-1]+_2n[i+j]*a[m-j+1]);
        for(int i=0; i<=m; i++) tmp=max(tmp,f[i][m-i]);
        ans+=tmp;
    }
    int len=40;
    for(; len>0&&ans.data[len]==0; len--);
    for(; len>=0; len--) printf("%d",ans.data[len]);
    return 0;
}
