#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *pi;
    float f, *pf;
    char c, *pc;
    printf("Enter a character: ");
    scanf("%c", &c);
    pc = &c;
    printf("Enter an integer: ");
    scanf("%d", &i);
    pi = &i;
    printf("Enter a float: ");
    scanf("%f", &f);
    pf = &f;
    printf("int: %d address: %u\n", i,pi);
    printf("float: %f address: %u\n", f,pf);
    printf("char: %c address: %u\n", c,pc);
    return 0;
}
