#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, largest, smallest;
    printf("This program checks and prints the Largest and Smallest of three integers\n");
    printf("Enter first integer");
    scanf("%d", &a);
    printf("Enter second integer");
    scanf("%d", &b);
    printf("Enter third integer");
    scanf("%d", &c);

    printf("The three integers are %d , %d , %d . \n", a, b, c);

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

    printf("Largest integer is %d .", largest);
    printf("Smallest integer is %d .", smallest);



    return 0;
}
