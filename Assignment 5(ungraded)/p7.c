#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    r=0;
    c=0;
    int arr[]={34, 73, 89, 76, 85, 59, 100, 7, 0, 34};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=arr[i];j>0;j--){
            r=arr[i]%j;
            if(r==0){
                c++;
            }
        }
        if(c==2){
            printf("%d, pos->%d\n", arr[i],i+1);
        }
        c=0;
    }
    return 0;
}
