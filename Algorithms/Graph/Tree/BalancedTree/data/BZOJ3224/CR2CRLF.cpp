#include <cstdio>

int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
        if (ch == '\r')
            putchar('\r'), putchar('\n');
        else
            putchar(ch);
    return 0;
}