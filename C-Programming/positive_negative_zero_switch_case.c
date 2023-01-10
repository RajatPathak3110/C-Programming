// C program to check positive negative or zero using switch case

#include <stdio.h>

int main()
{
    // Declare a variable to store the number
    int num;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    switch (num > 0)
    {
    case 1:
        printf("%d is a positive number.", num);
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is a negative number.", num);
            break;
        case 0:
            printf("%d is zero.", num);
            break;
        }
        break;
    }

    return 0;
}
