// C program to convert days into years, weeks and days.

#include <stdio.h>

int main()
{
    int days, years, weeks, rem_days;

    // prompt the user to enter the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // convert days to years
    years = days / 365;
    rem_days = days % 365;

    // convert remaining days to weeks
    weeks = rem_days / 7;
    rem_days = rem_days % 7;

    // print the result
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", rem_days);

    return 0;
}
