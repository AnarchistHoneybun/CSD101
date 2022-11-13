#include <stdio.h>
#include <stdlib.h>

void prime(int a[]){
    int c,d,k,s,t;
    c=0;
    d=0;
    for(int i=0;i<20;i++){
        for(int j=a[i];j>0;j--){
            if(a[i]%j==0){
                d++;
            }
        }
        if(d==2){
                c++;
            }
            d=0;
    }
    k=0;
    int b[c];
    for(int i=0;i<20;i++){
        for(int j=a[i];j>0;j--){
            if(a[i]%j==0){
                d++;
            }
        }

        if(d==2){
            b[k]=a[i];
            k++;
        }

        d=0;
    }
    /*for(int i=0;i<c;i++){
        printf("%d ", b[i]);
    }
    printf("\n");*/
    t=c*(c-1);
    int f[t];
    t=0;
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            f[t]=b[i]+b[j];
            t++;
        }
    }

    /*for(int i=0;i<t;i++){
        printf("%d ", f[i]);
    }
    printf("\n");*/
    for(int i=0;i<t;i++){
        for(int j=0;j<20;j++){
            if(f[i]==a[j]){
                printf("%d\n",f[i]);
            }
        }
    }




}
int main()
{
    int a[]={26, 15, 73, 90, 83, 43, 97, 52, 63, 29, 91, 78, 72, 21, 12, 44, 19, 22, 49, 48};
    prime(a);
    return 0;
}
