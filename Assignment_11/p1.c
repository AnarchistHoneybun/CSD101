#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point{
    float xcor;
    float ycor;

};

struct Triangle{
    struct Point p1;
    struct Point p2;
    struct Point p3;

};

int main(){

    float dist1, dist2, dist3;
    struct Triangle tri1;
    printf("Enter triangle coordinates-> \n");
    printf("Point 1 x-coordinate: ");
    scanf("%f", &tri1.p1.xcor);
    printf("Point 1 y-coordinate: ");
    scanf("%f", &tri1.p1.ycor);
    printf("Point 2 x-coordinate: ");
    scanf("%f", &tri1.p2.xcor);
    printf("Point 2 y-coordinate: ");
    scanf("%f", &tri1.p2.ycor);
    printf("Point 3 x-coordinate: ");
    scanf("%f", &tri1.p3.xcor);
    printf("Point 3 y-coordinate: ");
    scanf("%f", &tri1.p3.ycor);

    dist1 = sqrt(pow((tri1.p2.xcor - tri1.p1.xcor),2)+ pow((tri1.p2.ycor - tri1.p1.ycor),2));
    dist2 = sqrt(pow((tri1.p3.xcor - tri1.p2.xcor),2)+ pow((tri1.p3.ycor - tri1.p2.ycor),2));
    dist3 = sqrt(pow((tri1.p1.xcor - tri1.p3.xcor),2)+ pow((tri1.p1.ycor - tri1.p3.ycor),2));

    if(dist1<dist2+dist3 && dist2<dist3+dist1 && dist3<dist1+dist2){
        printf("The triangle is valid!\nLength of it's sides is: %.2f, %.2f, %.2f", dist1, dist2, dist3);
    }else{
        printf("The triangle is not valid :(");
    }

    return 0;
}
