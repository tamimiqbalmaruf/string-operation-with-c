#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int tc = 0; tc < n; tc++)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        char newString[101];
        int lenS = strlen(s);
        int lenT = strlen(t);
        int index = 0;

        for (int i = 0; i < lenS || i < lenT; i++)
        {
            if (i < lenS)
                newString[index++] = s[i];
            if (i < lenT)
                newString[index++] = t[i];
        }

        newString[index] = '\0';

        printf("%s\n", newString);
    }

    return 0;
}



// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;
//     char S[51], T[51];  // Strings max length 50

//     scanf("%d", &n);

//     while (n--) {
//         scanf("%s %s", S, T);
//         int lenS = strlen(S);
//         int lenT = strlen(T);
//         int i = 0, j = 0;

//         // Interleave characters
//         while (i < lenS && j < lenT) {
//             printf("%c%c", S[i], T[j]);
//             i++;
//             j++;
//         }

//         // Append the rest if any string is longer
//         while (i < lenS) {
//             printf("%c", S[i]);
//             i++;
//         }
//         while (j < lenT) {
//             printf("%c", T[j]);
//             j++;
//         }

//         printf("\n");
//     }

//     return 0;
// }
