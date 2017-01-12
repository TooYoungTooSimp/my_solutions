#include <cstdio>
int que[1001], head, tail, m, n, cnt;
bool mem[1001];
int main()
{
    scanf("%d%d", &m, &n);
    for (int i = 0, x; i < n; i++)
    {
        scanf("%d", &x);
        if (mem[x]) continue;
        if (tail - head == m) mem[que[head++]] = false;
        mem[que[tail++] = x] = true;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
