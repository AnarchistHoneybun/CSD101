#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, rem;
    printf("This program checks if an year is leap.\n");
    printf("Input year to be checked");
    scanf("%d", &a);
    rem=a%4;
    if (rem==0)
    {
        printf("The year %d is leap. \n", a);
    }
    else
    {
        printf("The year %d is not leap. \n", a);
    }
    return 0;
}
