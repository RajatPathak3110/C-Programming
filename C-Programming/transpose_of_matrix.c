// C program to transpose a matrix

#include <stdio.h>

int main()
{
    int i, j, rows, col, a[10][10], b[10][10];

    printf("\nPlease Enter Number of rows and columns\n");
    scanf("%d %d", &i, &j);

    printf("\n Please Enter the Array Elements \n");
    for (rows = 0; rows < i; rows++)
    {
        for (col = 0; col < j; col++)
        {
            scanf("%d", &a[rows][col]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (col = 0; col < j; col++)
        {
            b[col][rows] = a[rows][col];
        }
    }

    printf("\n Transpose Matrix Elemnts are: \n");
    for (rows = 0; rows < j; rows++)
    {
        for (col = 0; col < i; col++)
        {
            printf("%d \t ", b[rows][col]);
        }
        printf("\n");
    }

    return 0;
}
