#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[20], a, i, j;
    printf("Array checker!\n");
    printf("Enter array elements\n");
    i=0;
    j=0;
    while(i<20)
    {
        printf("Enter element %d--->", i+1);
        scanf("%d", &ar[i]);
        i++;
    }
    i=0;
    printf("Enter number to search for...");
    scanf("%d", &a);
    while(i<20)
    {
        if(a==ar[i])
        {
            j++;
        }
        i++;
    }
    if(j==0)
    {
        printf("The number %d is not present in array :(", a);
    }
    else
    {
        printf("The number %d appears in given array %d times", a,j);
    }

    return 0;
}
