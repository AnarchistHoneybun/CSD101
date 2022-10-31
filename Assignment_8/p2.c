#include <stdio.h>
#include <stdlib.h>

int findNthFibonacci(int idx) {
    if (idx < 2) {
        return idx;
    }

    return findNthFibonacci(idx - 1) + findNthFibonacci(idx - 2);
}

void printFibonacci(int start, int end) {

    if (start > end) {
        return;
    }

    int currentFibo = findNthFibonacci(start);

    printf(" %d ", currentFibo);

    printFibonacci(start+1, end);
}

void main() {
    int n;
    printf("Enter the number of terms till where you want to find the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n must be greater than 0.");
    } else {
        // prints fibonacci from 1st term to nth term
        printFibonacci(0, n);
    }


}
