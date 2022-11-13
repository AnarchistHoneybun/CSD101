#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define null 0

signed square_matrix_maker(signed **matrix, signed dimension);
signed square_matrix_printer(signed **matrix, signed dimension);
signed matrix_multiplication(signed **matrix1, signed **matrix2, signed dimension);
signed square_matrix_printer_mx(signed **matrix, signed dimension);


signed main(void)
{



    signed dimension;
    printf("\n Please enter the dimension of the square matrix : ");
    scanf("%d", &dimension);

    signed **matrix1 = (signed **)malloc(dimension * sizeof(signed *));
    for (signed i = null; i < dimension; i++)
    {
        matrix1[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    signed **matrix2 = (signed **)malloc(dimension * sizeof(signed *));
    for (signed i = null; i < dimension; i++)
    {
        matrix2[i] = (signed *)malloc(dimension * sizeof(signed));
    }


    printf("\n Please enter the elements of the first matrix : ");
    square_matrix_maker(matrix1, dimension);
    square_matrix_printer(matrix1, dimension);
    printf("\n Please enter the elements of the second matrix : ");
    square_matrix_maker(matrix2, dimension);
    square_matrix_printer(matrix2, dimension);
    matrix_multiplication(matrix1, matrix2, dimension);


    free(matrix1);
    free(matrix2);


    return null;
}

signed square_matrix_maker(signed **matrix, signed dimension)
{
    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\n Please enter the element in position [%d][%d] of the matrix : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n\n");
}

signed square_matrix_printer(signed **matrix, signed dimension)
{
    printf("\n The matrix you entered is : \n");

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
        printf("\n");
    }
}

signed matrix_multiplication(signed **matrix1, signed **matrix2, signed dimension)
{
    signed **matrix3 = (signed **)malloc(dimension * sizeof(signed *));
    for (signed i = null; i < dimension; i++)
    {
        matrix3[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            matrix3[i][j] = null;
            for (signed k = null; k < dimension; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\n The product of the two matrices is : ");
    square_matrix_printer_mx(matrix3, dimension);
    free(matrix3);
}

signed square_matrix_printer_mx(signed **matrix, signed dimension)
{
    printf("\n");

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
        printf("\n");
    }
}

