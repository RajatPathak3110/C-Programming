// C program to count frequency of digits in a given number

#include <stdio.h>

int main()
{
    int num, count;

    printf("\n Please Enter any number\n");
    scanf("%d", &num);

    for (count = 0; num > 0; num = num / 10)
    {
        count = count + 1;
    }

    printf("\n Number of Digits in a Given Number = %d", count);

    return 0;
}
