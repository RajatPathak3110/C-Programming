// C program to check vowel or consonant using switch case

#include <stdio.h>

int main()
{
    // Declare a variable to store the character
    char ch;

    // Read the character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel or consonant
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel.", ch);
        break;
    default:
        printf("%c is a consonant.", ch);
        break;
    }

    return 0;
}
