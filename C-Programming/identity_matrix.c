// C program to check whether a matrix is Identity matrix or not

#include <stdio.h>

int main()
{
    int i, j, rows, cols, a[10][10], Flag = 1;

    printf("\n Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);

    printf("\n Please Enter the Matrix Elements \n");
    for (rows = 0; rows < i; rows++)
    {
        for (cols = 0; cols < j; cols++)
        {
            scanf("%d", &a[rows][cols]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        for (cols = 0; cols < j; cols++)
        {
            if (a[rows][cols] != 1 && a[cols][rows] != 0)
            {
                Flag = 0;
                break;
            }
        }
    }
    if (Flag == 1)
    {
        printf("\n The Matrix that you entered is an Identity Matrix ");
    }
    else
    {
        printf("\n The Matrix that you entered is Not an Identity Matrix ");
    }

    return 0;
}
