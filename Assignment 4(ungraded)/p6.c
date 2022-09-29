#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    int a, b, k, r, x, n;
    r=0;
    printf("|| MENU SCREEN ||\n");
    printf("I. Odd or Even\nII. First number is multiple of the second number or not\nIII. Sum of digits of a given number is odd or even\n");
    printf("Choose Operation 1,2 or 3 to perform->");
    scanf("%d", &s);
    printf(".\n");
    switch (s){

    case 1: printf("Enter number to check->");
            scanf("%d",&n);
            if(n%2==0){
                printf("Number is even");
            }else{
            printf("Number is odd");
            }
            break;
    case 2: printf("Enter first number->");
            scanf("%d",&a);
            printf("Enter second number->");
            scanf("%d",&b);
            if(a%b==0){
                printf("%d is a multiple of %d", a,b);
            }else{
            printf("%d is not a multiple of %d", a,b);
            }
            break;
    case 3: r=0;
            printf("Enter number to check if sum of digits is even or odd->");
            scanf("%d", &k);
            x=k;
            do{
                r+=k%10;
                k=k/10;
            }while(k>10);
            if(r%2==0){
                printf("Sum of digits of %d is even.", x);
            }else{
                printf("Sum of digits of %d is odd.", x);
            }
            break;
    default: printf("Invalid Input");


    }
    return 0;
}
