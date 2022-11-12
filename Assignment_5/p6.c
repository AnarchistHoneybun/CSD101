#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int arr[]={1, 9, 8, 0, 8, 2, 3, 8, 4, 9};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len/2;i++){
        x=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=x;
    }
    for(int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
