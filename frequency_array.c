#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int cnt5 = 0;
    int cnt6 = 0;
    int cnt7 = 0;
    int cnt8 = 0;
    int cnt9 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0){
            cnt0++;
        }
        else if (a[i] == 1)
        {
            cnt1++;
        }
        else if (a[i] == 2)
        {
            cnt2++;
        }
        else if (a[i] == 3)
        {
            cnt3++;
        }
        else if (a[i] == 4)
        {
            cnt4++;
        }
        else if (a[i] == 5)
        {
            cnt5++;
        }
        else if (a[i] == 6)
        {
            cnt6++;
        }
        else if (a[i] == 7)
        {
            cnt7++;
        }
        else if (a[i] == 8)
        {
            cnt8++;
        }
        else if (a[i] == 9)
        {
            cnt9++;
        }
        
    };


    printf("0 => %d\n", cnt0);
    printf("1 => %d\n", cnt1);
    printf("2 => %d\n", cnt2);
    printf("3 => %d\n", cnt3);
    printf("4 => %d\n", cnt4);
    printf("5 => %d\n", cnt5);
    printf("6 => %d\n", cnt6);
    printf("7 => %d\n", cnt7);
    printf("8 => %d\n", cnt8);
    printf("9 => %d\n", cnt9);

    return 0;
};