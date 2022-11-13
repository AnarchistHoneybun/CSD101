#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    printf("Factorial calculator!\n");
    printf("Enter a number to calculate factorial...");
    scanf("%d", &a);
    i=a-1;
    while(i>0)
    {
        a=a*i;
        i--;
    }
    printf("The factorial of given number is: %d", a);
    return 0;
}
