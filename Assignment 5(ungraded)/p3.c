#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[]={1, 2, 9, 1, 7, 4, 4, 4, 5, 9, 3, 9, 2, 1, 6, 1, 7, 5, 2, 8};
    int len=20;
    printf("The array is {");
    for(int k=0;k<len;k++){
        printf(" %d ",ar[k]);
    }
    printf("}\n\n");
    for(int i=0;i<len-2;i++){
        for(int j=len-1;j>1;j--){
            if((ar[i]==ar[j]) && (ar[i+1]==ar[j-1]) && (ar[i+2]==ar[j-2])){
                printf("sub-array start and end: %d %d\n", i, i+2);
                printf("sub-array(reverse) start and end: %d %d\n", j, j-2);
            }
        }
    }






    return 0;
}
