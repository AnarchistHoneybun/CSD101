#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[2][3][2] = {{{1,2},{3,4},{15,5}},{{6,7},{7,8},{8,9}}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                printf("(%d,%d,%d) = %d ", i+1, j+1, k+1, *(*(*(ar+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    int big = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                if(*(*(*(ar+i)+j)+k) >= big){
                    big = *(*(*(ar+i)+j)+k);
                }
            }
        }
    }
    printf("Biggest number in above 3-d array is: %d", big);
    return 0;
}
