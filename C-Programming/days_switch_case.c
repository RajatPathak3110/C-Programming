// C program to print the days of the week using switch case

#include <stdio.h>

int main()
{
    // Declare a variable to store the day number
    int day;

    // Read the day number from the user
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    // Print the day of the week
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Error! Invalid day number.");
        return 0;
    }

    return 0;
}
