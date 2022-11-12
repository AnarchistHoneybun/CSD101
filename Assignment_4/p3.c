#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, r, s, a;
    i=0;
    printf("Age checker\n");
    printf("Enter Ram's age->");
    scanf("%d", &r);
    printf("Enter Shyam's age->");
    scanf("%d", &s);
    printf("Enter Ajay's age->");
    scanf("%d", &a);
    i=(r<=s && r<=a)?r:((s<=r && s<=a)?s:a);
    printf("The youngest age is %d.", i);

    return 0;
}
