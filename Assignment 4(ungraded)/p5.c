#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=10;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
