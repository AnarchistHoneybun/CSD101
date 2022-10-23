#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("This program checks the validity of a triangle\n");
    printf("Enter length of side A...");
    scanf("%f", &a);
    printf("Enter length of side B...");
    scanf("%f", &b);
    printf("Enter length of side C...");
    scanf("%f", &c);
    if (a<b+c && b<c+a && c<a+b)
    {
        printf("Triangle with given sides is valid.");
    }
    else
    {
        printf("Triangle with given sides is invalid.");
    }
    return 0;
}
