// C program to check alphabet, digit or special character using conditional operator

#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    // Use the conditional operator to check the character
    (isalpha(c)) ? printf("%c is an alphabet.\n", c) : (isdigit(c)) ? printf("%c is a digit.\n", c): printf("%c is a special character.\n", c);
    return 0;
}
