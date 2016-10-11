#include <cstdio>
#include <cstring>
#include <cstdlib>
inline int min(int a,int b)
{
    return a<b?a:b;
}
struct
{
    int data[1001],ite;
} sta,stb;
typedef struct Edge
{
    int from,to;
    Edge* next;
    Edge(int f,int t,Edge* n):from(f),to(t),next(n) {}
}*lpEdge;
lpEdge G[1001];
#define addEdge(x,y) G[(x)]=new Edge((x),(y),G[(x)])
int a[1001],n,S[1001],col[1001];
void color(int v)
{
    for(lpEdge cur=G[v]; cur; cur=cur->next)
        if(col[cur->to]==col[v]) putchar('0'),exit(0);
        else if(col[cur->to]==-1) col[cur->to]=col[v]^1,color(cur->to);
}
int main()
{
    memset(&sta,0,sizeof(sta));
    memset(&stb,0,sizeof(stb));
    memset(col,-1,sizeof(col));
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",a+i);
    S[n]=0x3f3f3f3f;
    for(int i=n-1; i>=0; i--) S[i]=min(a[i],S[i+1]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]<a[j]&&S[j+1]<a[i])
                addEdge(i,j),addEdge(j,i);
    for(int i=0; i<n; i++)
        if(col[i]==-1) col[i]=0,color(i);
    for(int i=0,next=1; i<n; i++)
    {
        if(col[i]==0) sta.data[sta.ite++]=a[i],printf("a ");
        else stb.data[stb.ite++]=a[i],printf("c ");
        while(sta.data[sta.ite-1]==next||stb.data[stb.ite-1]==next)
        {
            if(sta.data[sta.ite-1]==next) sta.ite--,printf("b "),next++;
            if(stb.data[stb.ite-1]==next) stb.ite--,printf("d "),next++;
        }
    }
    return 0;
}
