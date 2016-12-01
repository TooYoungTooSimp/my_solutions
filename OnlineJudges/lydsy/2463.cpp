#include <cstdio>
int main()
{
    int n;
    while (scanf("%d", &n) && n)
        puts(n & 1 ? "Bob" : "Alice");
    return 0;
}
