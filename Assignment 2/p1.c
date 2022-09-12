#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, largest, smallest;
    printf("This program checks and prints the largest of three numbers\n");
    printf("Enter first number");
    scanf("%f", &a);
    printf("Enter second number");
    scanf("%f", &b);
    printf("Enter third number");
    scanf("%f", &c);

    printf("The three numbers are %f , %f , %f . \n", a, b, c);

    if (a>b)
    {
        if (a>c)
        {
            largest=a;
            if (b>c)
            {
                smallest=c;
            }
            else if(b<c)
            {
                smallest=b;
            }
            else if(b==c)
            {
                smallest=b;
            }
        }
        else if (a<c)
        {
            largest=c;
            smallest=b;
        }
        else if (a==c)
        {
            largest=a;
            smallest=b;
        }
    }
    else if(a<b)
    {
        if (a>c)
        {
            largest=b;
            smallest=c;
        }
        else if(a<c)
        {
            if(b>c)
            {
                largest=b;
                smallest=a;
            }
            else if(b<c)
            {
                largest=c;
                smallest=a;
            }
            else if(b==c)
            {
                largest=b;
                smallest=a;
            }
        }
        else if(a==c)
        {
            largest=b;
            smallest=a;
        }
    }
    else if(a==b)
    {
        if(a>c)
        {
            largest=a;
            smallest=c;
        }
        else if(a<c)
        {
            largest=c;
            smallest=a;
        }
        else if(a==c)
        {
            printf("All numbers are equal. \n");
            largest=a;
            smallest=a;
        }
    }

    printf("Largest number is %f .", largest);



    return 0;
}
