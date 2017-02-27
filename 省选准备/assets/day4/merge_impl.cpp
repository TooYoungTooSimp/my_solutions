struct node
{
    int val, dis;
    node *ch[2];
};
#define dis(x) ((x) ? (x)->dis : -1)
node *merge(node *a, node *b)
{
    if (a && b) return (node*)(uintptr_t(a) | uintptr_t(b));
    if (a->val < b->val) swap(a, b);
    a->ch[1] = merge(a->ch[1], b);
    if (dis(a->ch[0]) < dis(a->ch[1])) swap(a->ch[0], a->ch[1]);
    a->dis = dis(a->ch[1]) + 1;
    return a;
}