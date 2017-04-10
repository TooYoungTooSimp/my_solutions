#include <cctype>
#include <cstdio>
#include <cstring>
inline void read(int &x) {
    int ch = x = 0, flag = 1;
    while (!isdigit(ch = getchar()))
        if (ch == '-') flag = -1;
    for (; isdigit(ch); ch = getchar()) x = x * 10 + ch - '0';
    x *= flag;
}
template <typename T>
inline T max(const T &x, const T &y) { return x > y ? x : y; }
const int inf = 0x3f3f3f3f, N = 50005, M = 1000010;
int adj[N], nxt[M << 1], to[M << 1], la[M << 1], lb[M << 1], ecnt;
inline void addEdge(int f, int t, int a, int b) {
    ecnt++;
    nxt[ecnt] = adj[f];
    adj[f] = ecnt;
    to[ecnt] = t;
    la[ecnt] = a;
    lb[ecnt] = b;
}
int main() {
    int n, m, q, u, v, a, b;
    read(n), read(m);
    for (int i = 0; i < m; i++) {
        read(u), read(v), read(a), read(b);
        addEdge(u, v, a, b), addEdge(v, u, a, b);
    }
    read(q);
    static int que[M << 2];
    static bool vis[M << 1];
    if (m != n - 1) {
        while (q--) {
            read(u), read(v), read(a), read(b);
            memset(vis, 0, sizeof(vis));
            int len = 0;
            que[len++] = u;
            bool visv = false;
            int ma = -inf, mb = -inf;
            for (int i = 0; i < len; i++)
                for (int e = adj[u = que[i]]; e; e = nxt[e])
                    if (!vis[e] && la[e] <= a && lb[e] <= b)
                        ma = max(ma, la[e]), mb = max(mb, lb[e]), vis[e] = true, que[len++] = to[e];
            for (int i = 0; i < len && !visv; i++)
                if (que[i] == v) visv = true;
            puts((visv && ma == a && mb == b) ? "Yes" : "No");
        }
    } else {
        static int pos[N], A[M], B[M];
        memset(A, 0xc0, sizeof(A));
        memset(B, 0xc0, sizeof(B));
        int len = 0;
        vis[que[len++] = 1] = true;
        for (int i = 0; i < len; i++)
            for (int e = adj[que[i]]; e; e = nxt[e])
                if (!vis[to[e]])
                    vis[que[len++] = to[e]] = true;
        memset(vis, 0, sizeof(vis));
        vis[que[0] = que[len - 1]] = true, len = 1;
        for (int i = 0; i < len; i++)
            for (int e = adj[que[i]], cnt = 0; e; e = nxt[e])
                if (!vis[to[e]])
                    A[i] = la[e], B[i] = lb[e], vis[que[len++] = to[e]] = true;
        for (int i = 0; i < len; i++) pos[que[i]] = i;
        while (q--) {
            int u, v, a, b;
            read(u), read(v), read(a), read(b);
            int _u = pos[u], _v = pos[v], ma = -inf, mb = -inf;
            u = _u < _v ? _u : _v;
            v = _u > _v ? _u : _v;
            bool ans = false, reachable = true;
            for (int i = u; i < v && reachable; i++) {
                if (A[i] > a || B[i] > b) reachable = false;
                ma = max(ma, A[i]), mb = max(mb, B[i]);
                if (ma == a && mb == b) ans = true;
            }
            if (!reachable) ans = false;
            if (reachable && !ans)
                for (int i = u - 1; i >= 0 && !ans; i--) {
                    if (A[i] > a || B[i] > b) break;
                    ma = max(ma, A[i]), mb = max(mb, B[i]);
                    if (ma == a && mb == b) ans = true;
                }
            if (reachable && !ans)
                for (int i = v; i < len && !ans; i++) {
                    if (A[i] > a || B[i] > b) break;
                    ma = max(ma, A[i]), mb = max(mb, B[i]);
                    if (ma == a && mb == b) ans = true;
                }
            puts(ans ? "Yes" : "No");
        }
    }
    return 0;
}

