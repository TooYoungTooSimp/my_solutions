#include<cstdio>
#include<iostream>
#include<cctype>
using namespace std;
const int maxn = 90000;
const int mod = 1000000;
int root, a, b, kind, n, ans, tot;
bool flag;
struct node
{
    int leftchild, rightchild, father, key;
} tree[maxn];
inline int readint()
{
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    int x = 0;
    while (isdigit(c))
    {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x;
}
void inorder(int x)///中序遍历输出树
{
    //cout<<"%";
    if (tree[x].leftchild != 0)
        inorder(tree[x].leftchild);
    cout << "节点编号:" << x << endl << "节点键值:" << tree[x].key << endl << "左节点:" << tree[x].leftchild << endl << "右节点:" << tree[x].rightchild << endl << "父节点:" << tree[x].father << endl << endl;
    if (tree[x].rightchild != 0)
        inorder(tree[x].rightchild);
}
void leftrotate(int x)//左旋
{
    int y = tree[x].father;
    tree[y].rightchild = tree[x].leftchild;
    if (tree[x].leftchild != 0)
        tree[tree[x].leftchild].father = y;
    tree[x].father = tree[y].father;
    if (tree[y].father != 0)
    {
        if (y == tree[tree[y].father].leftchild)
            tree[tree[y].father].leftchild = x;
        else tree[tree[y].father].rightchild = x;
    }
    tree[y].father = x;
    tree[x].leftchild = y;
}
void rightrotate(int x)//右旋
{
    int y = tree[x].father;
    tree[y].leftchild = tree[x].rightchild;
    if (tree[x].rightchild != 0)
        tree[tree[x].rightchild].father = y;
    tree[x].father = tree[y].father;
    if (tree[y].father != 0)
    {
        if (y == tree[tree[y].father].leftchild)
            tree[tree[y].father].leftchild = x;
        else tree[tree[y].father].rightchild = x;
    }
    tree[y].father = x;
    tree[x].rightchild = y;
}
void splay(int x)//伸展使x为根节点
{
    int t;
    while (tree[x].father != 0)
    {
        t = tree[x].father;
        if (tree[t].father == 0)
        {
            if (x == tree[t].leftchild)
                rightrotate(x);
            else leftrotate(x);
            break;
        }
        if (x == tree[t].leftchild)
        {
            if (t == tree[tree[t].father].leftchild)
            {
                rightrotate(t);
                rightrotate(x);
            }
            else
            {
                rightrotate(x);
                leftrotate(x);
            }
        }
        else
        {
            if (t == tree[tree[t].father].rightchild)
            {
                leftrotate(t);
                leftrotate(x);
            }
            else
            {
                leftrotate(x);
                rightrotate(x);
            }
        }
    }
    root = x;
}
void splayinsert(int x)//x是键值，插入x到树中
{
    if (root == 0)
    {
        tot++;
        root = tot;
        tree[root].key = x;
        tree[root].father = 0;
    }
    int t = root;
    while (true)
    {
        if (tree[t].key == x)
        {
            flag = true;
            return;
        }
        else if (tree[t].key > x)
        {
            if (tree[t].leftchild == 0)
            {
                tot++;
                tree[t].leftchild = tot;
                tree[tot].father = t;
                tree[tot].key = x;
                return;
            }
            else t = tree[t].leftchild;
        }
        else
        {
            if (tree[t].rightchild == 0)
            {
                tot++;
                tree[t].rightchild = tot;
                tree[tot].father = t;
                tree[tot].key = x;
                return;
            }
            else t = tree[t].rightchild;
        }
    }
    splay(x);
}
int maximum(int s)//以s为节点的子树的最大值
{
    //inorder(root);
    int p = s;
    //cout<<"$ ";
    while (tree[p].rightchild != 0)
    {
        //cout<<"$:";
        p = tree[p].rightchild;
    }
    //cout<<"# ";
    //inorder(root);
    splay(p);
    //cout<<tree[1].key<<" "<<tree[1].father<<" "<<tree[1].leftchild<<" "<<tree[1].rightchild<<endl;
    //cout<<tree[2].key<<" "<<tree[2].father<<" "<<tree[2].leftchild<<" "<<tree[2].rightchild<<endl;
    //cout<<tree[3].key<<" "<<tree[3].father<<" "<<tree[3].leftchild<<" "<<tree[3].rightchild<<endl;
    //cout<<root;
    //cout<<"^ ";
    //inorder(root);
    return p;
}
int minimum(int s)//最小值
{
    int p = s;
    while (tree[p].leftchild != 0) p = tree[p].leftchild;
    splay(p);
    return p;
}
int splayfind(int x)//x为键值，查找返回以x为键值的编号
{
    int p = root;
    while (x != 0 && x != tree[p].key)
    {
        //cout<<"$ ";
        if (x < tree[p].key) p = tree[p].leftchild;
        else p = tree[p].rightchild;
    }
    splay(p);
    //cout<<p;
    //inorder(root);
    //cout<<root;
    return p;
}
int join(int root1, int root2)//将以root1和root2为根节点的两棵树合成，其中root1的所有元素小于root2
{
    int p;
    if (root1 == 0) return root2;
    else if (root2 == 0) return root1;
    p = maximum(root1);
    tree[p].rightchild = root2;
    tree[root2].father = p;
    return p;
}
void splaydelete(int x)//x为键值，将x删除
{
    int p;
    p = splayfind(x);
    splay(p);
    //cout<<p;
    //inorder(root);
    int t = root;
    tree[tree[p].leftchild].father = 0;
    tree[tree[p].rightchild].father = 0;
    root = join(tree[p].leftchild, tree[p].rightchild);
    /*tree[tree[t].leftchild].father=0;
    tree[tree[t].rightchild].father=0;
    tree[t].key=0;
    tree[t].father=0;*/
    //inorder(root);
    //cout<<root;
    //dispose(t);
    //tree[root].father=0;
}
int predecessor(int x)//x是一个键值，找x的前驱
{
    //cout<<"%1 ";
    int p = splayfind(x);
    //cout<<p<<endl;
    //cout<<"%2 ";
    p = tree[p].leftchild;
    //cout<<p;
    //inorder(root);
    if (p == 0) return 0;
    int t = maximum(p);//返回的是节点编号
                       //inorder(root);
                       //cout<<"hr567";
    return t;
}
int successor(int x)//找x的后继
{
    //cout<<"hr567 ";
    int p = splayfind(x);//此处有问题
                         //cout<<"hr567 ";
    p = tree[p].rightchild;
    if (p == 0) return 0;
    int t = minimum(p);
    return t;
}
int myabs(int x)//绝对值
{
    if (x > 0) return x;
    else return -x;
}
int main()
{
    n = readint();
    for (int i = 1; i <= n; i++)
    {
        a = readint();
        b = readint();
        if (kind == a)
        {
            //cout<<kind<<endl;
            splayinsert(b);
            //inorder(root);
        }
        else if (root == 0)//空树
        {
            //cout<<"hr567";
            kind = a;
            splayinsert(b);
            //inorder(root);
        }
        else//领养宠物
        {
            flag = false;
            splayinsert(b);//插入以b为键值的一个节点，删除它的前驱或者后继，最后删除这个节点
                           //inorder(root);
                           //cout<<flag;
            if (flag)
            {
                //cout<<"hr567";
                splaydelete(b);
            }
            //cout<<"& ";
            else
            {
                //inorder(root);
                int x1 = 0;
                int x2 = 0;
                //cout<<"smile";
                x1 = predecessor(b);
                //cout<<"ca";
                //cout<<root;
                //inorder(root);
                //cout<<x1<<endl;
                x2 = successor(b);
                //cout<<x2;
                //cout<<"* ";
                if (x1 == 0 && x2 != 0)
                {
                    //cout<<"x1 ";
                    ans = (ans + tree[x2].key - b) % mod;
                    splaydelete(tree[x2].key);
                }
                else if (x2 == 0 && x1 != 0)
                {
                    //cout<<"x2 ";
                    ans = (ans + b - tree[x1].key) % mod;
                    splaydelete(tree[x1].key);
                }
                else if (x1 == 0 && x2 == 0)
                {
                    //cout<<"hr567";
                    ans = (ans + myabs(b - tree[root].key)) % mod;
                    splaydelete(tree[root].key);
                }
                else
                {
                    //cout<<"x3 ";
                    if (b - tree[x1].key <= tree[x2].key - b)
                    {
                        //cout<<"$ ";
                        ans = (ans + b - tree[x1].key) % mod;
                        //cout<<x1<<endl;
                        splaydelete(tree[x1].key);
                    }
                    else
                    {
                        //cout<<"@ ";
                        ans = (ans + tree[x2].key - b) % mod;
                        splaydelete(tree[x2].key);
                    }
                }
                splaydelete(b);
            }
        }
        //cout<<root<<endl;
        //inorder(root);
        //cout<<ans<<endl;
    }
    ans %= mod;
    printf("%d", ans);
    return 0;
}
/*
输入

20
0 586192
0 154341
0 882473
0 822823
0 516300
1 558644
1 127842
1 575969
1 787407
1 236357
1 461443
1 909522
1 307269
1 342303
1 117123
0 177696
0 530631
0 64279
0 659285
0 417888
输出

493821


*/
/*
5
0 2
0 4
1 3
1 2
1 5

3
*/