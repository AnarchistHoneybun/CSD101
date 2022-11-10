#include <stdio.h>
#include <stdlib.h>

void circularShift(int *x, int *y, int *z) {
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

void main() {
    int x,y,z;
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Enter z: ");
    scanf("%d", &z);

    printf("Before circular shift: \n x = %d, y = %d, z = %d\n", x, y, z);

    circularShift(&x, &y, &z);

    printf("After circular shift: \n x = %d, y = %d, z = %d\n", x, y, z);

}
