#include <stdio.h>
#include <stdlib.h>

int compareInt(const void *pa, const void *pb){
    const int *p1 = pa;
    const int *p2 = pb;
    return *p1 - *p2;
}
int main()
{
    int arr[3][5]={{31, 57, 88, 0, 54},
                    {1, 79, 12, 10, 2},
                    {49, 15, 98, 11, 77}};
    printf("Unsorted Array->\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        qsort(arr[i], 5, sizeof(int), compareInt);
    }
    printf("\nSorted array->\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
}
