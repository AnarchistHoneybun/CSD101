#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("This program checks if a character is a letter, number, or special character\n");
    printf("Enter character to check...");
    scanf("%c", &a);
    if (a>=48 && a<=57)
    {
        printf("Entered character is a number.");
    }
    else if((a>=33 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=126))
    {
        printf("Entered character is a special character.");
    }
    else if((a>=65 && a<=90) || (a>=97 && a<=122))
    {
        printf("Entered character is a letter.");
    }
    return 0;
}
