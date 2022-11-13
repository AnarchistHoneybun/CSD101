#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("This program checks if a letter is a vowel or not.\n");
    printf("Enter letter to check...");
    scanf("%c", &a);
    if (a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' ||a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u')
    {
        printf("Entered letter is a vowel");
    }
    else
    {
        printf("Entered letter is a consonant");
    }
    return 0;
}
