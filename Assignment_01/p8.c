#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, rem;
    printf("This program checks if an year is leap.\n");
    printf("Input year to be checked: ");
    scanf("%d", &year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Year is a leap year.");
            }else{
                printf("Year is not a leap year.");
            }
        }else{
            printf("Year is a leap year.");
        }
    }else{
        printf("Year is not a leap year.");
    }
        
    return 0;
}
