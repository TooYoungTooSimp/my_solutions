#include <cctype>
#include <cstdio>
int gettype(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/') return 1;
    if (ch == '(' || ch == ')') return 2;
    if (ch >= 'a' && ch <= 'c') return 3;
    return -1;
}
int main()
{
    char cur, prev = 0;
    int bracket = 0;
    while ((cur = getchar()) != ';')
    {
        if (gettype(cur) == 2) bracket = (cur == '(' ? bracket + 1 : bracket - 1);
        if (gettype(cur) == -1) {
            puts("ERROR 1");
            return 0;
        }
        if ((gettype(cur) == gettype(prev) && gettype(cur) != 2) || (cur == '(' && gettype(prev) == 3) || (prev == ')' && gettype(cur) == 3)) {
            puts("ERROR 3");
            return 0;
        }
        if (bracket < 0) {
            puts("ERROR 2");
            return 0;
        }
        prev = cur;
    }
    puts(bracket == 0 ? "OK" : "ERROR 2");
    return 0;
}
