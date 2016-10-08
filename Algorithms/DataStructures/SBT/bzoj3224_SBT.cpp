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
    Node *child[2];
    Node* Init(int x) { val = x, size = 1, child[0] = child[1] = 0; return this; }
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
    _typ alloc() { return  pt[i++]; }
    void free(_typ ptr) { pt[--i] = ptr; }
};

struct SBT
{
private:
    allocator<Node> mem;
    lpNode root;
    void rotate(lpNode& x, int d)
    {
        lpNode k = x->child[d ^ 1];
        x->child[d ^ 1] = k->child[d];
        k->child[d] = x;
        update(x);
        update(k);
        x = k;
    }
};