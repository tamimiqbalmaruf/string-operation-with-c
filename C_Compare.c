#include <stdio.h>

int main()
{
    char x[21], y[21];

    scanf("%s %s", &x, &y);

    int i = 0;

    while (1)
    {
        if (x[i] != y[i])
        {
            if (x[i] < y[i])
            {
                printf("%s", x);
                break;
            }
            else if (y[i] < x[i])
            {
                printf("%s", y);
                break;
            }
        }
        else if (x[i] == '\0' && y[i] == '\0')
        {
            printf("%s", x);
            break;
        }

        else if (x[i] == y[i])
        {
            i++;
        }
    }

    return 0;
};