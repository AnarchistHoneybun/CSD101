#include <stdio.h>
#include <stdlib.h>

void factorial(int *ptr_n, int *ptr_temp){
    *ptr_temp *= *ptr_n;
    //printf("%d\n", *ptr_temp);
    *ptr_n-=1;
    if(*ptr_n > 1){
        factorial(ptr_n, ptr_temp);
    }
}

int main()
{
    int n, temp, *ptr_n, *ptr_temp;
    printf("Enter number to compute factorial: ");
    scanf("%d", &n);
    ptr_n = &n;
    temp = 1;
    ptr_temp = &temp;
    factorial(ptr_n, ptr_temp);
    printf("The factorial is: %d", temp);
    return 0;
}
