// C program to perform scalar matrix multiplication

#include <stdio.h>

int main()
{
    int row, col, i, j, scalar, mat[10][10];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    printf("\nEnter the elements of the matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nEnter the scalar value: ");
    scanf("%d", &scalar);

    printf("\nThe matrix after scalar multiplication is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j] * scalar);
        }
        printf("\n");
    }
    return 0;
}
