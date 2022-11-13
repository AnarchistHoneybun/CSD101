#include <stdio.h>
#include <stdlib.h>

int main()
{
    float unit, bill, sbill;
    printf("This program calculates electricity bill!\n");
    printf("Input number of units of electricity used...");
    scanf("%f", &unit);
    if(unit<=50)
    {
        bill=unit*0.50;
    }
    else if(unit<=150)
    {
        bill=((unit-100)*0.75)+25;
    }
    else if(unit<=250)
    {
        bill=((unit-150)*1.20)+100;
    }
    else if(unit>250)
    {
        bill=((unit-250)*1.5)+220;
    }
    sbill=bill+(bill*0.20);
    printf("The electricity bill is %f", sbill);


    return 0;
}
