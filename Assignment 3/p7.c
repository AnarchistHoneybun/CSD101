#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char code[255];
    printf("Code Breaker!\n");
    printf("Enter code-->");
    n=0;
    while(n<255)
    {
        scanf("%c", &code[n]);
        if(code[n]=='\n')
        {break;}
        n++;
    }
    n=0;
    while(n<255 && code[n]!='\n')
    {
        code[n]=code[n]-3;
        n++;
    }
    printf("The decoded result is :");
    n=0;
    while(n<255 && code[n]!='\n')
    {
        printf("%c", code[n]);
        n++;
    }
    return 0;
}
