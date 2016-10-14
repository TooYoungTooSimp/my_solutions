#include <cstdio>
char buf1[101], buf2[101], buf3[101];
int H[127], R[127];
int main()
{
    scanf("%s%s%s", buf1, buf2, buf3);
    for (char *i1 = buf1, *i2 = buf2; *i1 || *i2; i1++, i2++)
    {
        if (H[*i1] == 0) H[*i1] = *i2;
        if (R[*i2] == 0) R[*i2] = *i1;
        if (H[*i1] != *i2 || R[*i2] != *i1) { puts("Failed"); return 0; }
    }
    for (int c = 'A'; c <= 'Z'; c++) if (H[c] == 0) { puts("Failed"); return 0; }
    for (char *i3 = buf3; *i3; i3++) *i3 = H[*i3];
    puts(buf3);
    return 0;
}
