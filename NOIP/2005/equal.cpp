#include <cctype>
#include <cstdio>
#include <cstring>
#include <list>
#include <stack>
using namespace std;
const int MOD = 1000000009;
inline int fast_pow(int i, int j)
{
    int ans = 1;
    while (j)
    {
        if (j & 1) ans = (ans * i) % MOD;
        i = (i * i) % MOD;
        j >>= 1;
    }
    return ans;
}
struct ENode
{
    int type /*0=x,1=num,2=op*/, val;
};
typedef list<ENode>::iterator ite_type;
class
{
    list<ENode> _list;
    char *S, *T;
#define Next() ((S != T) ? *S++ : -1)
#define Seek() ((S != T) ? *S : -1)
#define wrapper(x) ((isdigit((x)) || (x) == 'a' || (x) == '+' || (x) == '-' || (x) == '*' || (x) == '/' || (x) == '(' || (x) == ')' || (x) == '^') ? (x) : -1)
    void Read()
    {
        while (Seek() != -1)
        {
            ENode newNode;
            while (wrapper(Seek()) == -1) Next();
            int x = Seek();
            if (x == 'a')
            {
                newNode.type = 0;
                Next();
            }
            else if (isdigit(x))
            {
                newNode.type = 1, newNode.val = 0;
                while (isdigit(Seek())) newNode.val = newNode.val * 10 + Next() - '0';
            }
            else
                newNode.type = 2,
                newNode.val = Next();
            _list.push_back(newNode);
        }
    }
    int opRank(int ch, bool isInStack)
    {
        if (ch == '+' || ch == '-') return 1;
        if (ch == '*' || ch == '/') return 2;
        if (ch == '(' || ch == ')') return 5;
        if (ch == '^') return 4 - isInStack;
        return -1;
    }
    void Build()
    {
        list<ENode> newList;
        stack<ENode> st;
        for (list<ENode>::iterator cur = _list.begin(); cur != _list.end(); ++cur)
            if (cur->type == 0 || cur->type == 1)
                newList.push_back(*cur);
            else if (cur->val == '(' || st.empty())
                st.push(*cur);
            else if (cur->val == ')')
            {
                while (st.top().val != '(')
                {
                    newList.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && opRank(st.top().val, true) >= opRank(cur->val, false) && st.top().val != '(')
                {
                    newList.push_back(st.top());
                    st.pop();
                }
                st.push(*cur);
            }
        while (!st.empty())
        {
            newList.push_back(st.top());
            st.pop();
        }
        _list = newList;
    }

public:
    list<ENode> operator()(char *beg, char *end)
    {
        _list.clear();
        char *buf = new char[(end - beg) << 1];
        this->S = buf;
        for (char *ptr = beg; ptr != end; ptr++)
            if (!isspace(*ptr)) *buf++ = *ptr;
        this->T = buf;
        int bcnt = 0;
        for (char *ptr = S; ptr != T; ptr++) bcnt += (*ptr == '('), bcnt -= (*ptr == ')');
        for (int i = 0; i < bcnt; i++) *T++ = ')';
        buf = this->S;
        Read();
        delete[] buf;
        Build();
        return this->_list;
    }
} build;
int calc(const list<ENode> &expression, int num)
{
    list<ENode> _list = expression;
    for (list<ENode>::iterator ite = _list.begin(); ite != _list.end(); ++ite)
        if (ite->type == 0)
            ite->type = 1,
            ite->val = num;
    ite_type cur = _list.begin(), p1, p2;
    while (_list.size() > 1)
    {
        if (cur->type == 2)
        {
            p1 = p2 = cur;
            advance(p1, -2);
            advance(p2, -1);
            int x = p1->val;
            int y = p2->val;
            int ch = cur->val;
            _list.erase(p1);
            _list.erase(p2);
            cur->type = 2;
            cur->val = 1;
            if (ch == '+')
                cur->val = (x + y) % MOD;
            if (ch == '-')
                cur->val = x - y;
            if (ch == '*')
                cur->val = (1LL * x * y) % MOD;
            if (ch == '/')
                cur->val = x / y;
            if (ch == '^')
                cur->val = fast_pow(x, y);
        }
        cur++;
    }
    return _list.begin()->val;
}
int n;
char ms[60], ops[30][60];
list<ENode> mslist, opslst[30];
bool failed[30];
int main()
{
    fgets(ms, 60, stdin);
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
        fgets(ops[i], 60, stdin);
    mslist = build(ms, ms + strlen(ms) - 1);
    for (int i = 0; i < n; i++)
        opslst[i] = build(ops[i], ops[i] + strlen(ops[i]) - 1);
    for (int i = 10; i < 20; i++)
    {
        int ans = calc(mslist, i);
        for (int j = 0; j < n; j++)
            if (!failed[j])
                if (calc(opslst[j], i) != ans)
                    failed[j] = true;
    }
    for (int i = 0; i < n; i++)
        if (!failed[i])
            putchar('A' + i);
    return 0;
}