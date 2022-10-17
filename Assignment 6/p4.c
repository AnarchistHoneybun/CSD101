#include <stdio.h>
#include <stdlib.h>

float hypotenuse(float a, float b){
    float c=sqrt(pow(a,2)+pow(b,2));
    return c;
}

int main()
{
    float a,b;
    printf("Enter side a:");
    scanf("%f",&a);
    printf("Enter side b:");
    scanf("%f",&b);
    float c=hypotenuse(a,b);
    printf("The hypotenuse is: %.2f",c);
}
