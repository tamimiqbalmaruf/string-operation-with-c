#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[200001];
    fgets(s, 200001, stdin);

    int length_s = strlen(s);

    char ns[200001];

    int j = 0;

    for (int i = 0; i < length_s; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ns[j] = s[i] + 32;
            j++;
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            ns[j] = s[i];
            j++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            ns[j] = s[i];
            j++;
        }
    }

    int length_ns = j;

    bool isPalindrome = true;

    for (int i = 0; i < length_ns / 2; i++)
    {
        if (ns[i] != ns[(length_ns - 1) - i])
        {
            isPalindrome = false;
            break;
        }
    }

    printf("%s", isPalindrome ? "true" : "false");
    return 0;
};