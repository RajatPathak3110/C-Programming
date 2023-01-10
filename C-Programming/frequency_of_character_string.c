// C program to count frequency of each character in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int len, i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    len = strlen(str);

    // count frequency of each character
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count[str[i] - 'A']++;
        }
    }

    // print the frequency of each character
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("'%c' appears %d times\n", i + 'a', count[i]);
        }
    }

    return 0;
}
