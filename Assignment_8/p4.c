#include <stdio.h>
#include <stdlib.h>

int find2Power(int n) {
    if (n == 0) {
        return 1;
    }

    return 2 * find2Power(n-1);
}

void main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n must be positive or 0");
    } else {
        int power = find2Power(n);
        printf("nth power of 2: %d", power);
    }

}
