#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, j;
    i=0;
    j=0;
    printf("Matrix creator!\n");
    printf("Enter number of rows needed in matrix...");
    scanf("%d", &a);
    printf("Enter number of columns needed in matrix...");
    scanf("%d", &b);
    int array[a][b];
    while(i<a)
    {
        while(j<b)
        {
            printf("Enter element (%d,%d) of the matrix->", i,j);
            scanf("%d", &array[i][j]);
            j++;
        }
        j=0;
        i++;
    }
    i=0;
    j=0;
    printf("The matrix is\n");
    while(i<a)
    {
        printf("(");
        while(j<b)
        {
            printf(" %d ", array[i][j]);
            j++;
        }
        printf(")\n");
        j=0;
        i++;
    }

    return 0;
}
