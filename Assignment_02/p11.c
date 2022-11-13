#include <stdio.h>
#include <stdlib.h>

int main()
{
    float phy, chem, bio, mat, comp, sum, perct;
    char grade;
    printf("This program calculates percentage and grade for given marks!\n");
    printf("Enter physics marks(out of 100)...");
    scanf("%f", &phy);
    printf("Enter chemistry marks(out of 100)...");
    scanf("%f", &chem);
    printf("Enter biology marks(out of 100)...");
    scanf("%f", &bio);
    printf("Enter mathematics marks(out of 100)...");
    scanf("%f", &mat);
    printf("Enter computer marks(out of 100)...");
    scanf("%f", &comp);
    sum=phy+chem+bio+mat+comp;
    perct=(sum/500)*100;
    printf("Percentage of marks earned is %.2f\n", perct);
    if(perct>=90)
    {
        grade='A';
    }
    else if(perct>=80)
    {
        grade='B';
    }
    else if(perct>=70)
    {
        grade='C';
    }
    else if(perct>=60)
    {
        grade='D';
    }
    else if(perct>=40)
    {
        grade='E';
    }
    else if(perct<40)
    {
        grade='F';
    }
    printf("Obtained grade is %c", grade);

    return 0;
}
