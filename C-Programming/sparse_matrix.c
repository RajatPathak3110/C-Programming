// C Program to Check Matrix is a Sparse Matrix

#include <stdio.h>

int main()
{
    int i, j, rows, col, a[10][10], Total = 0;

    printf("\n Please Enter Number of rows and columns :  ");
    scanf("%d %d", &i, &j);

    printf("\n Please Enter the Matrix Elements \n");
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
            if (a[rows][col] == 0)
            {
                Total++;
            }
        }
    }
    if (Total > (rows * col) / 2)
    {
        printf("\n The Matrix that you entered is a Sparse Matrix ");
    }
    else
    {
        printf("\n The Matrix that you entered is Not a Sparse Matrix ");
    }

    return 0;
}
