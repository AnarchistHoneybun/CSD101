#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c;
    printf("Character Type Determiner!\n");
    printf("Enter character to check->");
    scanf("%c", &c);
    if(c>=65 && c<=90){
        printf("Upper-Case character");
    }else if(c>=97 && c<=122){
        printf("Lower-Case character");
    }else if(c>=45 &&c<=57){
        printf("Digit character");
    }else if((c>=0 && c<=47)||(c>=58 && c<=64)||(c>=91 && c<=96)||(c>=123 && c<=127)){
        printf("Special character");
    }




    return 0;
}
