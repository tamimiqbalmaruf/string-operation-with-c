#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    };

    int divBy2 = 0;
    int divBy3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            divBy2++;
        }
        else if (a[i] % 3 == 0)
        {
            divBy3++;
        }
    }

    printf("%d %d", divBy2, divBy3);

    return 0;
};