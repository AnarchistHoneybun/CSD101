#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[26];
    int i=0;
    char let='A';
    printf("i + ch array creator!\n");
    while(i<26)
    {
        array[i]=i+let;
        i++;
        let++;
    }
    i=0;
    while(i<26)
    {
        printf("%d\n", array[i]);
        i++;
    }
    printf("Fin!");
    return 0;
}
