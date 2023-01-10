// C program to check whether a number is a palindrome or not:

#include <stdio.h>

int main()
{
    int num, reversed_num = 0, remainder, original_num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (original_num == reversed_num)
    {
        printf("%d is a palindrome.\n", original_num);
    }
    else
    {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}
