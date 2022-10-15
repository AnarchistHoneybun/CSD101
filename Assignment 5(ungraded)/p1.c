#include <stdio.h>
#include <stdlib.h>

int smalLarge(int ar[],int length){
    int s,l,g;
    l=0;
    for(int i=1;i<length;i++){
        if(ar[i]%2==0 && ar[i]>l){
            l=ar[i];
        }
    }
    s=l;
    for(int j=1;j<length;j++){
        if(ar[j]%2==0 && ar[j]<s){
            s=ar[j];
        }
    }
    printf("Smallest even number is: %d\n",s);
    printf("Largest even number is: %d\n",l);
    g=s<l?s:l;
    for(int k=g;k>0;k--){
        if(s%k==0 && l%k==0){
            printf("Their GCD is: %d",k);
            break;
        }
    }




}
int main()
{
    int i;
    printf("Enter array length between 20-30 elements->");
    scanf("%d",&i);
    int a[i];
    for(int j=0;j<i;j++){
        printf("Element %d=",j+1);
        scanf("%d",&a[j]);
    }
    smalLarge(a,i);

}
