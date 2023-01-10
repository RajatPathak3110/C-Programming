// hollow mirrored right triangle star pattern

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for (i = 1; i <= rows; i++)
    {
        /* Print trailing spaces */
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        /* Print hollow right triangle */
        for (j = 1; j <= i; j++)
        {
            /*
             * Print star for last row(i==row),
             * first column(j==1) and
             * last column(j==i).
             */
            if (i == rows || j == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
