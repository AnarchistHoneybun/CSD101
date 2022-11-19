#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[3][4]={
                {1,2,3,4},
                {11,12,13,14},
                {21,22,23,24}
                };
    int(*p)[4];
    p=a;
    printf("Printing directly: \n");
    printf("p=%u p+1=%u p+2=%u", p,p+1,p+2);
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("(%d,%d)=%d ",i+1,j+1,*(*(p+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    printf("Printing using 'a' as pointer: \n");
    printf("p=%u p+1=%u p+2=%u", *a,*(a+1),*(a+2));
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("(%d,%d)=%d ",i+1,j+1,*(*(a+i)+j));
        }
        printf("\n");
    }
}
