#include <stdio.h>
#include <stdlib.h>

int findNthTerm(int n) {
    if (n < 3) {
        return n;
    }

    return findNthTerm(n-1) + findNthTerm(n-2) + findNthTerm(n-3);
}

void main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n must be positive or 0");
    } else {
        int termN = findNthTerm(n);
        printf("nth term of relation: %d", termN);
    }

}
