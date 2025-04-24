#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    char s[10001];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s);

        int small = 0, capital = 0, digit = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a')
            {
                small++;
            }
            else if (s[i] >= 'A')
            {
                capital++;
            }
            else if (s[i] >= 48)
            {
                digit++;
            }
        };

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
};