#include <stdio.h>
#include <stdlib.h>

int primeno(int, int);

int main()
{
    int num1, num2, check;
    printf("Enter lower limit: ");
    scanf("%d", &num1);
    printf("Enter upper limit: ");
    scanf("%d", &num2);
    printf("Prime numbers in given range are: ");
    for(int i=num1+1;i<num2;i++){
        check = primeno(i, i / 2);
        if (check == 1)
        {
        printf("%d ", i);
        }

    }
    return 0;
}

int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }
    }
}
