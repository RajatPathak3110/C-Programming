// C program to find sum of main diagonal elements of a matrix

#include <stdio.h>

int main()
{
    int m, n, c, d, matrix[10][10], sum = 0;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix[c][d]);

    for (c = 0; c < m; c++)
        sum = sum + matrix[c][c];

    printf("Sum of the main diagonal elements of the matrix = %d\n", sum);

    return 0;
}
