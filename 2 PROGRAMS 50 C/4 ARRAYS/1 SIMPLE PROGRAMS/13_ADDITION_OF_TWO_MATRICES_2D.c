// Date :

#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], sum[3][3], i, j;

    printf("\t program for addition of two matrices : \n");

    printf("Enter elements of first matrix : ");

    for (int i = 0; i < 3; i++) // In for loop varialbel declaration.
    {
        for (j = 0; j < 3; j++)
        {
            scanf("\n%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("\n%d", &mat2[i][j]);
        }
    }

    printf("\n\t Addition of two  matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n\t %d", sum[i][j]);
        }
    }
    return 0;

    // Coded by Mayur
}