#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, x1, x2, x3, x4, x5, x6, sum;
    printf("This program prints the number of notes required for a certain amount of money\n");
    printf("Available denominations 1, 2, 5, 10, 50, 100. \n");
    printf("Enter amount to calculate for...");
    scanf("%d", &amount);
    x1=amount/100;
    amount=amount%100;
    x2=amount/50;
    amount=amount%50;
    x3=amount/10;
    amount=amount%10;
    x4=amount/5;
    amount=amount%5;
    x5=amount/2;
    amount=amount%2;
    x6=amount/1;
    sum=x1+x2+x3+x4+x5+x6;
    printf("The number of notes required are %d", sum);

    return 0;
}
