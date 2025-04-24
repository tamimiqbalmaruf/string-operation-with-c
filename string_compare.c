#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int big_length = 0;

    if (strlen(a) < strlen(b))
    {
        big_length = strlen(b);
    }
    else
    {
        big_length = strlen(a);
    }

    bool isASmall = true;
    bool isBSmall = true;

    for (int i = 0; i < big_length; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] < b[i])
            {
                isBSmall = false;
            }
            else if (a[i] > b[i])
            {
                isASmall = false;
            }
            break;
        }
    }

    if (isASmall == isBSmall)
    {
        printf("Equal");
    }
    else
    {
        printf("%s = %s\n%s = %s", a, isASmall ? "Small" : "Big", b, isBSmall ? "Small" : "Big");
    }

    return 0;
};