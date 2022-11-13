#include <stdio.h>
#include <stdlib.h>

int findSquareSum(int n) {

    if(n == 1) {
        return 1;
    }

    return n*n + findSquareSum(n-1);
}

void main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n must be greater than 0");
    } else {
        int sum = findSquareSum(n);
        printf("sum of first n squares: %d", sum);
    }


}
