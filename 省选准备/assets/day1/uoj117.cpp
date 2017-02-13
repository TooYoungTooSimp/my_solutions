#include <cstdio>
#include <cctype>
inline void read(int &x)
{
    int ch = x = 0;
    while (!isdigit(ch = getchar()));
    for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
}
const int N = 100000 + 10, E = N << 2;
int adj[N], to[E], nxt[E], ecnt = 1;
int out[N], in[N], t, n, m;
bool flag[E];
int ans[E], tail;
inline void addEdge(int u, int v)
{
    ecnt++;
    nxt[ecnt] = adj[u];
    adj[u] = ecnt;
    to[ecnt] = v;
}
void dfs(int u)
{
    for (int &i = adj[u]; i; i = nxt[i])
    {
        int c = t == 1 ? i >> 1 : i - 1;
        bool sig = i & 1;
        if (!flag[c])
        {
            flag[c] = true;
            dfs(to[i]);
            ans[tail++] = (t == 1 && sig) ? -c : c;
        }
    }
}
int main()
{
    read(t), read(n), read(m);
    for (int i = 0, u, v; i < m; i++)
    {
        read(u), read(v);
        addEdge(u, v);
        out[u]++, in[v]++;
        if (t == 1) addEdge(v, u);
    }
    for (int i = 1; i <= n; i++)
        if (t == 1 ? ((in[i] + out[i]) & 1) : (in[i] != out[i]))
            return puts("NO"), 0;
    for (int i = 1; i <= n; i++)
        if (adj[i])
        {
            dfs(i);
            break;
        }
    if (tail != m) return puts("NO"), 0;
    puts("YES");
    for (int i = m - 1; i >= 0; i--) printf("%d ", ans[i]);
    return 0;
}