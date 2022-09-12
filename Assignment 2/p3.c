#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("This program checks if an integer is divisible by both 5 and 11.\n");
    printf("Enter integer to be checked...");
    scanf("%d", &a);
    if (0==a%5 && 0==a%11)
    {
        printf("Number is divisible by both 5 and 11!");
    }
    else
    {
        printf("Number is not divisible by both 5 and 11");
    }
    return 0;
}
