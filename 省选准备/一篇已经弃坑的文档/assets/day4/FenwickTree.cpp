void add(int x, int v)
{
    for (; x <= n; x += lowbit(x))
        A[x] += v;
}

void sum(int x)
{
    int res = 0;
    for (; x; x -= lowbit(x))
        res += A[x];
    return res;
}
