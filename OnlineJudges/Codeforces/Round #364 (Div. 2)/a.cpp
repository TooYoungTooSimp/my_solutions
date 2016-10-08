#include <iostream>
#include <map>
using namespace std;
int n, sum, tmp;
multimap<int, int> M;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
        M.insert(make_pair(tmp, i + 1));
    }
    n >>= 1;
    sum /= n;
    multimap<int, int>::iterator ite;
    for (int i = 0; i < n; i++)
    {
        ite = M.begin();
        tmp = sum - ite->first;
        cout << ite->second << " ";
        M.erase(ite);
        ite = M.find(tmp);
        cout << ite->second << endl;
        M.erase(ite);
    }
    return 0;
}