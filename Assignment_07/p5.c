#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rev(int, int);

int main()
{
    int num, result;
    int length = 0, temp;

    printf("Enter an integer number to check: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        length++;
        temp = temp / 10;
    }
    result = rev(num, length);
    if(num==result){
        printf("Number is a palindrome.");
    }else{
        printf("Number is not a palindrome.");
    }
    return 0;
}

int rev(int num, int len)
{
    if (len == 1)
    {
        return num;
    }
    else
    {
        return (((num % 10) * pow(10, len - 1)) + rev(num / 10, --len));
    }
}
