#include <map>
#include <iostream>
using namespace std;

int main()
{
    int n;
    map<int,int> M;
    cin>>n;
    for(int i=0,x; i<n; i++)
    {
        cin>>x;
        M[x]++;
    }
    for(map<int,int>::iterator ite=M.begin(); ite!=M.end(); ++ite)
        cout<<ite->first <<" "<<ite->second<<endl;
    return 0;
}
