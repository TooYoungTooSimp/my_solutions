#include <cstdio>
int scoreMat[9][9]=
{
    {6,6,6,6,6,6,6,6,6},
    {6,7,7,7,7,7,7,7,6},
    {6,7,8,8,8,8,8,7,6},
    {6,7,8,9,9,9,8,7,6},
    {6,7,8,9,10,9,8,7,6},
    {6,7,8,9,9,9,8,7,6},
    {6,7,8,8,8,8,8,7,6},
    {6,7,7,7,7,7,7,7,6},
    {6,6,6,6,6,6,6,6,6}
};
int a[9][9],scoreTable[9][9][10];
int maxScore=-1;
bool row[9][10],col[9][10],squ[3][3][10];
#define canPlace(n,x,y) (!(row[(x)][(n)]||col[(y)][(n)]||squ[(x)/3][(y)/3][(n)]))
#define place(n,x,y) a[(x)][(y)]=(n),row[(x)][(n)]=col[(y)][(n)]=squ[(x)/3][(y)/3][(n)]=true;
#define unplace(n,x,y) a[(x)][(y)]=0,row[(x)][(n)]=col[(y)][(n)]=squ[(x)/3][(y)/3][(n)]=false;
void dfs(int pos)
{
    if(pos>=81)
    {
        int score=0;
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                score+=scoreTable[i][j][a[i][j]];
        if(score>maxScore) maxScore=score;
    }
    else
    {
        int x=pos/9,y=pos%9;
        if(a[x][y]) dfs(pos+1);
        else for(int i=1; i<=9; i++)
                if(canPlace(i,x,y))
                {
                    place(i,x,y);
                    dfs(pos+1);
                    unplace(i,x,y);
                }
    }
}
int main()
{
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            for(int k=1; k<=9; k++)
                scoreTable[i][j][k]=scoreMat[i][j]*k;
    for(int i=8; i>=0; i--)
        for(int j=8; j>=0; j--)
            scanf("%d",&a[i][j]);
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            if(a[i][j]) place(a[i][j],i,j);
    dfs(0);
    printf("%d",maxScore);
    return 0;
}
