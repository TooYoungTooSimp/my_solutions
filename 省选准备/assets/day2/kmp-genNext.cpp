for (int i = 1, j = -1; i < len; i++)
{
    while (~j && str[j + 1] != str[i]) j = next[j];
    if (str[j + 1] == str[i]) j++;
    next[i] = j;
}