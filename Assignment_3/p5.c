#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k;
    printf("3x3 Matrix Multiplier\n");
    printf("Enter values for first matrix\n");
    i=0;
    j=0;
    while(i<3)
    {
        while(j<3)
        {
            printf("Enter element (%d,%d)->", i+1,j+1);
            scanf("%d", &mat1[i][j]);
            j++;
        }
        j=0;
        i++;
    }
    i=0;
    j=0;
    printf("Enter values for second matrix\n");
    while(i<3)
    {
        while(j<3)
        {
            printf("Enter element (%d,%d)->", i+1,j+1);
            scanf("%d", &mat2[i][j]);
            j++;
        }
        j=0;
        i++;
    }
    i=0;
    j=0;
    k=0;
    printf("The resultant matrix is:\n");
    while(i<3)
    {
        while(j<3)
        {
            mat3[i][j]=0;
            while(k<3)
            {
                mat3[i][j]+=(mat1[i][k]*mat2[k][j]);
                k++;
            }
            k=0;
            j++;
        }
        j=0;
        i++;
    }
    i=0;
    j=0;
    k=0;
    printf("\n");
    while(i<3)
    {
        printf("|");
        while(j<3)
        {
            printf(" %d ", mat3[i][j]);
            j++;
        }
        printf("|\n");
        j=0;
        i++;
    }
    return 0;
}
