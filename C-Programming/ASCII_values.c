// C program to print ASCII values of all characters

#include <stdio.h>

int main()
{
    char c;

    printf("ASCII values of all characters:\n");

    // Iterate through all ASCII values
    for (int i = 0; i <= 127; i++)
    {
        // Convert ASCII value to character and print it
        c = (char)i;
        printf("%d = %c\n", i, c);
    }

    return 0;
}
