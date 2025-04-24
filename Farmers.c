#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int daysForOneFarmer = m1 * d;

        int daysForTotalFarmer = daysForOneFarmer / (m1 + m2);

        int daysSaved = d - daysForTotalFarmer;

        printf("%d\n", daysSaved);
    }

    return 0;
};