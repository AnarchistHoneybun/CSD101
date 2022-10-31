#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double distanceBetween2Points(double *cords1, double *cords2) {
    // exp1 = (x1 - x2)^2
    double exp1 = (cords1[0] - cords2[0])*(cords1[0] - cords2[0]);
    // exp2 = (y1 - y2)^2
    double exp2 = (cords1[1] - cords2[1])*(cords1[1] - cords2[1]);
    // ans = sqrt(exp1 + exp2);
    return sqrt(exp1 + exp2);
}

void main() {
    double cords1[2], cords2[2];
    int i = 2;
    printf("Enter X1 : ");
    scanf("%lf", &cords1[0]);
    printf("Enter Y1 : ");
    scanf("%lf", &cords1[1]);
    printf("Enter X2 : ");
    scanf("%lf", &cords2[0]);
    printf("Enter Y2 : ");
    scanf("%lf", &cords2[1]);

    printf("Distance between two points: %f units.", distanceBetween2Points(cords1, cords2));
}
