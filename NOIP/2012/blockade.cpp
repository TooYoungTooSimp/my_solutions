#define _CRT_SECURE_NO_WARNINGS
#define _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING
#include <bits/stdc++.h>
using namespace std;
#define CRP(t, x) const t &x
#define OPX(op, t, x) operator op(CRP(t, x))
#define OPL(t, x) bool OPX(<, t, x) const
#define FIL(x, v) memset(x, v, sizeof(x))
#define CLR(x) FIL(x, 0)
#define NE1(x) FIL(x, -1)
#define INF(x) FIL(x, 0x3f)
#ifndef _DEBUG
#define _DEBUG 0
#endif // !_DEBUG
#define IFD if (_DEBUG)
typedef int64_t ll, i64;
typedef uint64_t ull, u64;
template <typename... Types>
using comtype = typename common_type<Types...>::type;
template <typename T>
using enable_if_arithmetic = typename enable_if<is_arithmetic<T>::value>::type;
template <typename T>
using enable_if_integral = typename enable_if<is_integral<T>::value>::type;
inline char getchar(int)
{
    static char buf[64 << 20], *S = buf, *T = buf;
    if (S == T) T = fread(S = buf, 1, 64 << 20, stdin) + buf;
    return S == T ? EOF : *S++;
}
template <typename T, typename = enable_if_integral<T>>
inline bool read(T &x)
{
    int ch = x = 0, f = 1;
    while (!isdigit(ch = getchar()))
        if (ch == EOF)
            return false;
        else if (ch == '-')
            f = 0;
    for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
    return x = f ? x : -x, true;
}
template <typename T, typename... Args, typename = enable_if_integral<T>>
inline bool read(T &x, Args &... args) { return read(x) && read(args...); }
template <typename T1, typename T2, typename TResult = comtype<T1, T2>>
inline TResult mmin(CRP(T1, v1), CRP(T2, v2)) { return min<TResult>(v1, v2); }
template <typename T, typename... Args, typename TResult = comtype<T, Args...>>
inline TResult mmin(CRP(T, v), const Args &... args) { return min<TResult>(v, mmin(args...)); }
template <typename T1, typename T2, typename TResult = comtype<T1, T2>>
inline TResult mmax(CRP(T1, v1), CRP(T2, v2)) { return max<TResult>(v1, v2); }
template <typename T, typename... Args, typename TResult = comtype<T, Args...>>
inline TResult mmax(CRP(T, v), const Args &... args) { return max<TResult>(v, mmax(args...)); }
inline ll gcd(ll a, ll b)
{
    for (; b; swap(a, b)) a %= b;
    return a;
}
inline ll fpow(ll a, ll b, ll m)
{
    ll r = 1;
    for (; b; b >>= 1, a = a * a % m)
        if (b & 1) r = r * a % m;
    return r;
}
constexpr double eps = 1e-8;
inline int sgn(double x) { return x > eps ? 1 : x < -eps ? -1 : 0; }
const int N = 500050;
template <size_t N, size_t M>
struct Graph
{
    struct Edge
    {
        int nxt, to, len;
    } E[M];
    int adj[N], ecnt;
    inline void addEdge(int f, int t, int l)
    {
        E[++ecnt] = {adj[f], t, l};
        adj[f] = ecnt;
    }
};
Graph<N, N << 1> G;
int ipos[N];
int fa[20][N];
ll dis[N];
vector<int> ch[N];
void dfs1(int x)
{
    for (int t, e = G.adj[x]; e; e = G.E[e].nxt)
        if (t = G.E[e].to, t != fa[0][x])
        {
            fa[0][t] = x;
            ch[x].push_back(t);
            dis[t] = dis[x] + G.E[e].len;
            dfs1(t);
        }
}
bool cov[N], rest[N];
bool dfs2(int x)
{
    if (cov[x]) return true;
    for (int t, e = G.adj[x]; e; e = G.E[e].nxt)
        if (t = G.E[e].to, t != fa[0][x])
        {
            if (!dfs2(t)) return false;
        }
    return !ch[x].empty();
}
int n, m;
bool check(ll mx)
{
    CLR(cov);
    vector<pair<ll, int>> v;
    for (int i = 0; i < m; i++)
    {
        int x = ipos[i];
        for (int j = 19; j >= 0; j--)
            if (fa[j][x] > 1 && dis[ipos[i]] - dis[fa[j][x]] <= mx)
                x = fa[j][x];
        if (fa[0][x] == 1 && dis[ipos[i]] <= mx)
            v.push_back({mx - dis[ipos[i]], x});
        else
            cov[x] = true;
    }
    sort(v.begin(), v.end());
    for (int e = G.adj[1]; e; e = G.E[e].nxt)
        rest[G.E[e].to] = !dfs2(G.E[e].to);
    vector<ll> rtime, rdis;
    for (auto p : v)
        if (rest[p.second] && p.first < dis[p.second])
            rest[p.second] = false;
        else
            rtime.push_back(p.first);
    for (int e = G.adj[1]; e; e = G.E[e].nxt)
        if (rest[G.E[e].to])
            rdis.push_back(dis[G.E[e].to]);
    if (rtime.size() < rdis.size()) return false;
    sort(rdis.begin(), rdis.end());
    sort(rtime.begin(), rtime.end());
    int idx = 0;
    for (auto d : rdis)
    {
        while (idx < rtime.size() && rtime[idx] < d)
            idx++;
        if (idx == rtime.size()) return false;
        idx++;
    }
    return true;
}
int main()
{
    read(n);
    for (int i = 1, u, v, w; i < n; i++)
    {
        read(u, v, w);
        G.addEdge(u, v, w);
        G.addEdge(v, u, w);
    }
    read(m);
    for (int i = 0; i < m; i++) read(ipos[i]);
    dfs1(1);
    if (ch[1].size() > m) return puts("-1"), 0;
    for (int j = 1; j < 20; j++)
        for (int i = 1; i <= n; i++)
            fa[j][i] = fa[j - 1][fa[j - 1][i]];
    ll L = 0, R = *max_element(dis, dis + n + 1) << 1, M;
    while (R - L > 1)
        if (check(M = (L + R) >> 1))
            R = M;
        else
            L = M;
    printf("%lld", R);
    return 0;
}
