// C program to create Simple Calculator using switch case

#include <stdio.h>

int main()
{
    // Declare variables
    float num1, num2, result;
    char operator;

    // Read input from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    // Perform the calculation
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Error! Invalid operator.");
        return 0;
    }

    // Print the result
    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);

    return 0;
}
