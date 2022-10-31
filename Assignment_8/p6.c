#include <stdio.h>
#include <stdlib.h>

int count = 1;

void main() {

    count++;
    printf("main called %d times.\n", count-1);
    main();
}
