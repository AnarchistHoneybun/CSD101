#include <stdio.h>
#include <stdlib.h>

void main()
{
    int ar[5]={1,2,3,4,5};
    int (*p)[5];
    p=ar;
    printf("Original array: ");
    for(int j=0;j<5;j++){
        printf("%d ", ar[j]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        *(*p+i)+=5;
    }
    printf("Printing with array expression: ");
    for(int j=0;j<5;j++){
        printf("%d ", ar[j]);
    }
    printf("\n");
    printf("Printing with pointer expression: ");
    for(int j=0;j<5;j++){
        printf("%d ", *(*p+j));
    }
}
