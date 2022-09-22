#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, ctr1, ctr2, hcf, lcm;
    printf("This program calculates HCF and LCM of given two numbers!\n");
    printf("Enter first number...");
    scanf("%d", &a);
    printf("Enter second number...");
    scanf("%d", &b);
    if(a>=b)
    {
        i=a;
    }
    else
    {
        i=b;
    }
    while(i>0)
    {
        hcf=i;
        ctr1=a%i;
        ctr2=b%i;
        i--;
        if(ctr1==0 && ctr2==0)
        {
            break;
        }

    }
    printf("The HCF is %d\n", hcf);
    lcm=(a*b)/hcf;
    printf("The LCM is %d", lcm);
    return 0;
}
