#include <cctype>
#include <cstdio>
#include <cstring>
int p1, p2, p3;
char input[1000], output[10000];
int tail;
int transchar(int ch)
{
    if (p1 == 1) return tolower(ch);
    if (p1 == 2) return toupper(ch);
    if (p1 == 3) return '*';
    return -1;
}
void fillchar(int s, int e)
{
    if (p3 == 1)
        for (int ch = s + 1; ch != e; ch++)
            for (int i = 0; i < p2; i++)
                output[tail++] = transchar(ch);
    else
        for (int ch = e - 1; ch != s; ch--)
            for (int i = 0; i < p2; i++)
                output[tail++] = transchar(ch);
}
int main()
{
    scanf("%d%d%d\n%s", &p1, &p2, &p3, input);
    for (char *ptr = input; *ptr != '\0'; ptr++)
        if ((*(ptr + 1) == '-') && (*ptr < *(ptr + 2)) && (isalnum(*ptr) && isalnum(*(ptr + 2))) && !(isdigit(*ptr) ^ isdigit(*(ptr + 2))))
        {
            output[tail++] = *ptr;
            fillchar(*ptr, *(ptr + 2));
            ptr++;
        }
        else
            output[tail++] = *ptr;
    puts(output);
    return 0;
}
