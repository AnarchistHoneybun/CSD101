#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,rem;
    printf("This program checks if first number is a multiple of the second \n\n");
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    rem=a%b;
    if(rem==0)
    {
        printf("%d is a multiple of %d . \n", a, b);
    }
    else if(rem!=0)
    {
        printf("%d is not a multiple of %d . \n", a, b);
    }
    return 0;
}
