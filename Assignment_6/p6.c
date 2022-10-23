#include <stdio.h>
#include <stdlib.h>

int multiple(int ar1,int ar2){
    if(ar2%ar1==0){
        return 1;
    }else{
        return 0;
    }


}


int main()
{
    int ar[6][2]={{2,1},{2,5},{2,8},{3,9},{13,65},{80,9}};
    for(int i=0;i<6;i++){
        if(multiple(ar[i][0],ar[i][1])){
            printf("%d is a multiple of %d.\n",ar[i][1],ar[i][0]);
        }else{
            printf("%d is not a multiple of %d.\n",ar[i][1],ar[i][0]);

        }
    }
    return 0;
}
