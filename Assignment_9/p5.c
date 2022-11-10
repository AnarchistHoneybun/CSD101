#include <stdio.h>
#include <stdlib.h>

void sumup(int *ar, int *len, int *sum){
    for(int i=0;i<*len;i++){
        *sum += *(ar+i);
    }
}

int main()
{
    int sum, ar[10];
    sum = 0;
    int len = sizeof(ar)/sizeof(int);
    for(int i=0;i<10;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &ar[i]);
    }
    sumup(ar, &len, &sum);
    printf("The sum is: %d", sum);
    return 0;
}
