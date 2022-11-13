#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(){

    float a=1.0;
    float x = (float)rand()/(float)(RAND_MAX/a);
    if(round(x)==1.000000){
        return 1;
    }else if(round(x)==1.000000){
        return 0;
    }

}
int main()
{
    srand(time(NULL));
    int head,tail;
    head=tail=0;
    for(int i=1;i<101;i++){
        if(flip()){
            head++;
        }else{
            tail++;
        }

    }
    printf("Number of Heads: %d\nNumber of Tails: %d",head,tail);
}
