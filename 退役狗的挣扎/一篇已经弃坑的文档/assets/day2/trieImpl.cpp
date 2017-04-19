struct node
{
    node *trans[26];
    int cnt;
};
void insert(node *n, char *str)
{
    for (; *str; n = n->trans[*str - '0'])
        if (n->trans[*str - '0'] == 0)
            n->trans[*str - '0'] = new_node();
    n->cnt++;
}