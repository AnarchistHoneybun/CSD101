#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, area, peri;
    printf("This program checks if the area of a triangle is more than the perimeter!\n");
    printf("Enter the side lengths of the triangle...\n");
    scanf("%f%f", &a, &b);
    area=a*b;
    peri=2*(a+b);
    printf("The perimeter is %f \n", peri);
    printf("The area is %f \n", area);
    if (area==peri)
    {
        printf("Area is not greater than perimeter");
    }
    else if(area<peri)
    {
        printf("Area is not greater than perimeter");
    }
    else if(area>peri)
    {
        printf("Area is greater than perimeter");
    }
    return 0;
}
