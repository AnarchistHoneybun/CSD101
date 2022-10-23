#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,disc,root1,root2,real,imag;
    printf("This program prints the roots of a quadratic equation\n");
    printf("Equation is of the form ax^2+bx+c\n");
    printf("Enter a...");
    scanf("%f", &a);
    printf("Enter b...");
    scanf("%f", &b);
    printf("Enter c...");
    scanf("%f", &c);
    printf("Given equation is %.2fx^2+ %.2fx+ %.2f.\n", a,b,c);
    disc=(b*b)-(4*a*c);
    if(disc>0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("the roots are %.2f and %.2f", root1, root2);
    }
    else if(disc==0)
    {
        root1=((-b)/(2*a));
        root2=root1;
        printf("The roots are %.2f and %.2f", root1,root2);
    }
    else
    {
        real=((-b)/(2*a));
        imag= sqrt(-disc) / (2 * a);
        printf("The roots are %.2f+ %.2f and %.2f- %.2f", real,imag,real,imag);
    }
    return 0;
}
