#include <cstdio>
#include <cstdlib>
#define sz(x) (x == 0 ? 0 :x->size)
#define update(x) if(x) x->size = sz(x->child[0]) + sz(x->child[1]) + 1
#define getVal(x) (x == 0 ? 0 : x->val)
typedef int valType;
const int arrSize = 100005;
struct Node
{
    valType val;
    int size;
    Node *child[2], *father;
    Node* Init(int x, Node* f)
    {
        val = x, size = 1, father = f, child[0] = child[1] = 0;
        return this;
    }
};
typedef Node* lpNode;

template<typename _ty, typename _typ = _ty*>
struct allocator
{
    private:
        int i;
        _ty* data;
        _typ* pt;
    public:
        allocator(int size)
        {
            data = new _ty[size];
            pt = new _typ[size];
            this->i = 0;
            for (int j = 0; j < size; j++) pt[j] = &data[j];
        }
        _typ alloc()
        {
            return  pt[i++];
        }
        void free(_typ ptr)
        {
            pt[--i] = ptr;
        }
};
struct SplayTree
{
    private:
        lpNode root = 0;
        allocator<Node>* mem;
        void rotate(lpNode x)
        {
            if (x == 0 || x->father == 0) return;
            int d = (x == x->father->child[0]);
            lpNode y = x->father;
            y->child[d ^ 1] = x->child[d];
            if (x->child[d]) x->child[d]->father = y;
            x->father = y->father;
            if (y->father) y->father->child[y == y->father->child[1]] = x;
            y->father = x;
            x->child[d] = y;
            update(y);
            update(x);
        }
        void Splay(lpNode x, lpNode& target)
        {
            lpNode targetFather = target->father;
            while (x->father != targetFather)
                if (x->father == target) rotate(x);
                else if ((x->father->father->child[0] == x->father) == (x->father->child[0] == x))
                    rotate(x->father), rotate(x);
                else
                    rotate(x), rotate(x);
            target = x;
        }
        lpNode find(int x)
        {
            lpNode s = root;
            while (true)
                if (s == 0) return 0;
                else if (s->val == x)
                {
                    Splay(s, root);
                    return s;
                }
                else s = s->child[x > s->val];
        }
        lpNode join(lpNode x, lpNode y)
        {
            if (x == 0) return y;
            else
            {
                lpNode m = max_min(x, 1);
                Splay(m, x);
                m->child[1] = y;
                if (y) y->father = m;
                update(m);
                return x;
            }
        }
    public:
        SplayTree(int _)
        {
            mem = new allocator<Node>(_);
        }
        lpNode max_min(lpNode x, int i)
        {
            while (x&&x->child[i]) x = x->child[i];
            return x;
        }
        void insert(int x)
        {
            if (root == 0)
                root = mem->alloc()->Init(x, 0);
            else
            {
                lpNode s = root, p = 0;
                while (s)
                    p = s, s = s->child[x > s->val];
                s = mem->alloc()->Init(x, p);
                p->child[x > p->val] = s;
                Splay(s, root);
            }
        }
        void remove(int x)
        {
            lpNode p = find(x);
            if (p)
            {
                root = join(p->child[0], p->child[1]);
                root->father = 0;
                mem->free(p);
            }
        }
        int rank(int x)
        {
            lpNode s = root;
            int ans = 0;
            while (s)
                if (x <= s->val)
                    s = s->child[0];
                else
                    ans = ans + 1 + sz(s->child[0]), s = s->child[1];
            return ans + 1;
        }
        lpNode select(int x)
        {
            lpNode s = root;
            while (s)
                if (x == sz(s->child[0]) + 1) return s;
                else if (x <= sz(s->child[0])) s = s->child[0];
                else x = x - 1 - sz(s->child[0]), s = s->child[1];
        }
        lpNode near(int x, int d)
        {
            lpNode s = root, ans = 0;
            while (s)
                if (d ? s->val > x:s->val < x)
                    ans = s, s = s->child[d ^ 1];
                else
                    s = s->child[d];
            return ans;
        }
};

int main()
{
    SplayTree st(arrSize);
    int n, op, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &op, &num);
        if (op == 1) st.insert(num);
        else if (op == 2) st.remove(num);
        else if (op == 3) printf("%d\n", st.rank(num));
        else if (op == 4) printf("%d\n", getVal(st.select(num)));
        else if (op == 5) printf("%d\n", getVal(st.near(num, 0)));
        else if (op == 6) printf("%d\n", getVal(st.near(num, 1)));
    }
    return 0;
}
