#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", &s);

    int alphabets[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        alphabets[s[i]-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] > 0)
        {
            printf("%c - %d\n", i + 97, alphabets[i]);
        }
        
    }
    
    return 0;
};