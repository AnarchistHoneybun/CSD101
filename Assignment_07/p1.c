#include <stdio.h>
#include <stdlib.h>

int large(int arr[],int big, int start, int len);

int main()
{
    int arr[]={6, 6, 7, 4, 2, 5, 3, 6, 1, 2, 1, 4, 15, 9, 2, 2, 7, 1, 5, 7};
    int big=0;
    int start=0;
    int len= sizeof(arr)/sizeof(int);
    big=large(arr,big,start,len);
    printf("%d\n",big);


    return 0;
}

int large(int arr[],int big,int start,int len){
    if(start==len){
        return big;
    }
    if(arr[start]>=big){
        big=arr[start];
    }
    start++;
    large(arr,big,start,len);

}
