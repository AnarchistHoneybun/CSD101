#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("This program checks if a letter is uppercase or lowercase\n");
    printf("Enter letter to check...");
    scanf("%c", &a);
    if(a>=65 && a<=90)
    {
        printf("Entered letter is uppercase.");
    }
    else if(a>=97 && a<=122)
    {
        printf("Entered letter is lowercase.");
    }
    return 0;
}
