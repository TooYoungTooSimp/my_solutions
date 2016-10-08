#include <cstdio>
struct
{
    char name[30];
    int score1,score2,papercnt;
    char b1,b2;
} a[101];
int money[101];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%s%d%d%s%s%d",a[i].name,&a[i].score1,&a[i].score2,&a[i].b1,&a[i].b2,&a[i].papercnt);
    for(int i=0; i<n; i++)
    {
        auto& x =a[i];
        if(x.score1>80&&x.papercnt>0) money[i]+=8000;
        if(x.score1>85&&x.score2>80) money[i]+=4000;
        if(x.score1>90) money[i]+=2000;
        if(x.score1>85&&x.b2=='Y') money[i]+=1000;
        if(x.score2>80&&x.b1=='Y') money[i]+=850;
    }
    int maxn,maxid;
    maxn=maxid=-1;
    for(int i=0; i<n; i++)
        if(money[i]>maxn)
            maxn=money[maxid=i];
    puts(a[maxid].name);
    printf("%d\n",money[maxid]);
    maxn=0;
    for(int i=0; i<n; i++)
        maxn+=money[i];
    printf("%d",maxn);
    return 0;
}
