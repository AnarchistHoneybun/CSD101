#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, r;
    printf("Zero sorter!\n");
    printf("Enter array length: ");
    scanf("%d", &i);
    int ar[i];
    printf("Enter array elements--->\n");
    while(j<i)
    {
        printf("Enter element %d: ", j+1);
        scanf("%d", &ar[j]);
        j++;
    }
    printf("The sorted array is: ");
    j=0;
    k=i-1;
    r=0;
    int count =0;
    for (r = 0; r <i; r++)
        if (ar[r] != 0)
            ar[count++] = ar[r];
    while (count < i)
        ar[count++] = 0;
    j=0;
    while(j<i)
    {
        printf("%d ", ar[j]);
        j++;
    }

    return 0;
}
