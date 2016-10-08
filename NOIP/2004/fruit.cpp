#include <cstdio>
#include <queue>
using namespace std;

int main()
{
    int n,tmp,a,b;
    priority_queue<int,vector<int>,greater<int>> heap;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&tmp);
        heap.push(tmp);
    }
    tmp=0;
    while(heap.size()>1)
    {
        a=heap.top();
        heap.pop();
        b=heap.top();
        heap.pop();
        heap.push(a+b);
        tmp+=(a+b);
    }
    printf("%d",tmp);
    return 0;
}
