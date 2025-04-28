#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000001];
    scanf("%s", &s);

    int fre[26] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int idx = s[i] - 97;
        fre[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 97, fre[i]);
        }
    }
    return 0;
};