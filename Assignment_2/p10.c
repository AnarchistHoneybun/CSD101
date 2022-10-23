#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, aa, bb, cc;
    printf("This program checks if a triangle is right angled, equilateral, or none of those\n");
    printf("Enter length of side A...");
    scanf("%f", &a);
    printf("Enter length of side B...");
    scanf("%f", &b);
    printf("Enter length of side C...");
    scanf("%f", &c);
    aa=a*a;
    bb=b*b;
    cc=c*c;
    if (aa==bb+cc || bb==aa+cc || cc==aa+bb)
    {
        printf("Given triangle is right angled");
    }
    else if (a==b && b==c)
    {
        printf("Given triangle is equilateral");
    }
    else
    {
        printf("Given triangle is neither right-angled or equilateral");
    }
    return 0;
}
