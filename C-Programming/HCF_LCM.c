// C program to find HCF(GCD) AND LCM of two numbers

#include <stdio.h>

int main()
{
    // Read in the two numbers
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);

    // Find the GCD of the two numbers using the Euclidean algorithm
    int gcd = a;
    while (b != 0)
    {
        int temp = gcd % b;
        gcd = b;
        b = temp;
    }

    // Find the LCM of the two numbers
    int lcm = (a * b) / gcd;

    // Print the results
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
