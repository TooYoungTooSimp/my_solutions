for (int i = 0, j = -1; i < len; i++)
{
    while (~j && t[j + 1] != s[i]) j = next[j];
    if (t[j + 1] == s[i]) j++;
    if (j == len - 1) ans++, j = next[j];
}