#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("This program checks if a number is positive, negative, or zero!\n");
    printf("Enter number to check...");
    scanf("%f", &a);
    if (a>0.000000)
    {
        printf("Number entered is positive");
    }
    else if (a==0)
    {
        printf("Number entered is zero");
    }
    else if (a<0)
    {
        printf("Number entered is negative");
    }
    return 0;
}
