#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("To print number of days in a month!\n");
    printf("Enter month number(January=1, February=2, etc.)-->");
    scanf("%d", &i);
    switch (i){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("This month has 31 days.");
        break;
    case 2: printf("This month has 28 days, but 29 days in a leap year.");
        break;
    case 4:
    case 6:
    case 9:
    case 11: printf("This month has 30 days.");
        break;
    default: printf("Invalid Input");


    }
    return 0;
}
