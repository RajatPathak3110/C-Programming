// C program to check prime, armstrong and perfect numbers using functions

#include <stdio.h>
#include <math.h>

// function to check if a number is prime
int is_prime(int n)
{
    int i;

    if (n <= 1)
    {
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// function to check if a number is Armstrong
int is_armstrong(int n)
{
    int sum = 0, temp = n;
    int num_digits = (int)log10(n) + 1;

    while (temp)
    {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    return n == sum;
}

// function to check if a number is perfect
int is_perfect(int n)
{
    int sum = 0, i;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n))
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    if (is_armstrong(n))
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number\n", n);
    }

    if (is_perfect(n))
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}
