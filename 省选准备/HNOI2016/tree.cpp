#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
inline void read(int &x)
{
    int ch = x = 0, flag = 1;
    while (!isdigit(ch = getchar()))
        if (ch == '-') flag = -1;
    for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
    x *= flag;
}
const int N = 100010;
int adj[N], nxt[N << 1], to[N << 1], ecnt;
inline void addEdge(int f, int t)
{
    ecnt++;
    nxt[ecnt] = adj[f];
    adj[f] = ecnt;
    to[ecnt] = t;
}
typedef vector<int> vint;
typedef vint::iterator vite;
vint pattern;
int dep[N << 4];
vector<pair<vite, vite> > tRanges;
void dfs(int u, int fa)
{
    if (dep[u] == -1) dep[u] = dep[fa] + 1;
    tRanges[u].first = pattern.end();
    pattern.push_back(u);
    for (int e = adj[u]; e; e = nxt[e])
        if (to[e] != fa)
            dfs(to[e], u), pattern.push_back(u);
    tRanges[u].second = pattern.end();
}
vector<int> newTree;
int main()
{
    memset(dep, -1, sizeof(dep));
    int n, m, q;
    read(n), read(m), read(q);
    for (int i = 1, u, v; i < n; i++)
    {
        read(u), read(v);
        addEdge(u, v), addEdge(v, u);
    }
    pattern.reserve((n << 1) - 1);
    tRanges.resize((n << 1) - 1);
    dfs(1, 0);
    newTree = pattern;
    while (m--)
    {
        int x, t;
        read(x), read(t);
        vint tmp = vint(tRanges[x].first, tRanges[x].second), toSort = tmp;
        sort(toSort.begin(), toSort.end());
        vite fin = unique(toSort.begin(), toSort.end());
        int sz = (newTree.size() + 1) >> 1, delteDep = dep[t] - dep[x] + 1;
        for (vite ite = tmp.begin(); ite != tmp.end(); ++ite)
        {
            int newVal = lower_bound(toSort.begin(), fin, *ite) - toSort.begin() + sz + 1;
            dep[newVal] = dep[*ite] + delteDep;
            *ite = newVal;
        }
        vite insPos = newTree.end() - 1;
        while (*insPos != t) --insPos;
        tmp.push_back(t);
        newTree.insert(insPos + 1, tmp.begin(), tmp.end());
    }
    static int RMQ[N << 4][20];
    int sz = newTree.size();
    for (int i = 0; i < sz; i++) RMQ[i][0] = dep[newTree[i]];
    for (int j = 1; (1 << j) <= sz; j++)
        for (int i = 0; i < sz; i++)
            RMQ[i][j] = min(RMQ[i][j - 1], RMQ[i + (1 << (j - 1))][j - 1]);
    tRanges.resize(0);
    static int P[N << 4];
    memset(P, -1, sizeof(P));
    for (vite ite = newTree.begin(); ite != newTree.end(); ++ite)
        if (P[*ite] == -1) P[*ite] = ite - newTree.begin();
    while (q--)
    {
        int f, t;
        read(f), read(t);
        int sumDep = dep[f] + dep[t];
        f = P[f], t = P[t];
        if (f > t) swap(f, t);
        int k = log2(t - f + 1);
        printf("%d\n", sumDep - (min(RMQ[f][k], RMQ[t - (1 << k) + 1][k]) << 1));
    }
    return 0;
}
