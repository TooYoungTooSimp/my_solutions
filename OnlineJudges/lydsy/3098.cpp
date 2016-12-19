#include <cstdio>
#include <cstdlib>
int main()
{
    printf("100000 %d\n", ((rand() << 16) | rand()) % 100000 + 1);
    for (int i = 0; i < 100000; i++) putchar(rand() % 26 + 'a');
    return 0;
}