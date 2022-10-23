#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, inputcopy, inputr, x1, x2, x3, x4, x5;
    printf("This program checks if a five digit number is a palindrome!\n");
    printf("Enter five digit number to be checked...\n");
    scanf("%d", &input);
    printf("The number entered is %d \n", input);
    inputcopy=input;
    x1=(input%10)*10000;
    input=input/10;
    x2=(input%10)*1000;
    input=input/10;
    x3=(input%10)*100;
    input=input/10;
    x4=(input%10)*10;
    input=input/10;
    x5=input;
    inputr=x1+x2+x3+x4+x5;
    printf("%d is the reverse of the given number.\n", inputr);
    if(inputr==inputcopy)
    {
        printf("Number is a palindrome.");
    }
    else
    {
        printf("Number is not a palindrome.");
    }

    return 0;
}
