#include<cstdio>
#include<cstring>
#include<iostream>
#define maxn 1000010
using namespace std;
struct Splay
{
    int l[maxn], r[maxn], f[maxn], root, cnt;
    int s[maxn], c[maxn], a[maxn];
    inline int newnode(int k, int fa)
    {
        int x = ++cnt;
        a[x] = k, s[x] = c[x] = 1, l[x] = r[x] = 0, f[x] = fa;
        return x;
    }
    inline void update(int x)
    {
        s[x] = s[l[x]] + s[r[x]] + c[x];
    }
    inline void lr(int x)
    {
        int y = f[x];
        r[y] = l[x];
        if (l[x])f[l[x]] = y;
        f[x] = f[y];
        if (root == y)root = x;
        else if (l[f[y]] == y)l[f[y]] = x;
        else r[f[y]] = x;
        f[y] = x, l[x] = y;
        update(y), update(x);
    }
    inline void rr(int x)
    {
        int y = f[x];
        l[y] = r[x];
        if (r[x])f[r[x]] = y;
        f[x] = f[y];
        if (root == y)root = x;
        else if (l[f[y]] == y)l[f[y]] = x;
        else r[f[y]] = x;
        f[y] = x, r[x] = y;
        update(y), update(x);
    }
    inline void rotate(int x)
    {
        if (l[f[x]] == x) rr(x);
        else lr(x);
    }
    inline void splay(int x, int target = 0)
    {
        while (f[x] != target)
        {
            if (f[f[x]] == target)rotate(x);
            else if ((l[f[f[x]]] == f[x]) == (l[f[x]] == x))rotate(f[x]), rotate(x);
            else rotate(x), rotate(x);
        }
    }
    inline void insert(int k)
    {
        if (root == 0)root = newnode(k, 0);
        else
        {
            int x = root;
            while (x)
            {
                if (k == a[x]) { c[x]++; break; }
                else
                {
                    int &y = (k < a[x] ? l[x] : r[x]);
                    if (!y) { x = y = newnode(k, x); break; }
                    else x = y;
                }
            }splay(x);
        }
    }
    inline void erase(int k)
    {
        int x = root;
        while (x)
        {
            if (k == a[x]) { c[x]--; break; }
            else x = (k < a[x] ? l[x] : r[x]);
        }splay(x);
        if (!c[x])
        {
            int p = l[x]; while (r[p])p = r[p];
            if (p)
            {
                splay(p, root);
                r[p] = r[root];
                f[r[root]] = p;
                f[p] = 0;
                update(root = p);
            }
            else
            {
                if (r[root]) f[r[root]] = 0, root = r[root];
                else root = cnt = 0;
            }
        }
    }
    inline int find_by_rank(int k)
    {
        int x = root;
        while (x)
        {
            if (k >= s[l[x]] + 1 && k <= s[l[x]] + c[x])return a[x];
            else if (k < s[l[x]] + 1)x = l[x];
            else k -= s[l[x]] + c[x], x = r[x];
        }
    }
    inline int find_by_val(int k)
    {
        int x = root, res = 0;
        while (x)
        {
            if (k == a[x])return res + s[l[x]] + 1;
            else if (k < a[x])x = l[x];
            else res += s[l[x]] + c[x], x = r[x];
        }return res;
    }
    inline int prev(int k)
    {
        int x = root, res;
        while (x)
        {
            if (k > a[x])res = a[x], x = r[x];
            else x = l[x];
        }return res;
    }
    inline int next(int k)
    {
        int x = root, res;
        while (x)
        {
            if (k < a[x])res = a[x], x = l[x];
            else x = r[x];
        }return res;
    }
    Splay() { root = cnt = 0; }
}st;
int main()
{
    int n, a, b, type, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if (st.cnt == 0) type = a;
        if (a == type) st.insert(b);
        else
        {
            int pr = st.prev(b), su = st.next(b);
            if (pr == 0)
            {
                ans += su - b;
                st.erase(su);
            }
            else if (su == 0)
            {
                ans += b - pr;
                st.erase(pr);
            }
            else
            {
                int d1 = su - b, d2 = b - pr;
                if (d1 < d2)
                {
                    ans += d1;
                    st.erase(su);
                }
                else
                {
                    ans += d2;
                    st.erase(pr);
                }
            }
        }
        ans %= 1000000;
    }
    printf("%d", ans);
    return 0;
}