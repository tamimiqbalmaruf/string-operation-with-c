#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n + 1];
    scanf("%s", &a);

    int sumDigits = 0;

    for (int i = 0; i < n; i++)
    {
        sumDigits += a[i] - 48;
    }

    printf("%d", sumDigits);

    return 0;
};