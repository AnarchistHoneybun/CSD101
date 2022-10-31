#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 5, *p;
    p = &i;
    printf("value before changing: %d\n", i);
    *p += 1;
    printf("value after changing: %d", i);
}
