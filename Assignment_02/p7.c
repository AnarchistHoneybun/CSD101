#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("This program prints number of days in a month\n");
    printf("Enter month no. (Jan=1, Feb=2, etc.)...");
    scanf("%d", &a);
    if (a==1 ||a==3 ||a==5 ||a==7 ||a==8 ||a==10 ||a==12)
    {
        printf("Given month has 31 days.");
    }
    else if (a==4 ||a==6 ||a==9 ||a==11)
    {
        printf("Given month has 30 days.");
    }
    else if (a==2)
    {
        printf("Given month has 27/28 days");
    }
    else
    {
        printf("data out of bounds");
    }
    return 0;
}
