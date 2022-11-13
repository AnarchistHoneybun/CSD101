#include <stdio.h>
#include <stdlib.h>

void populator(int ar[], int *ta, int *tb, int *tc, int *reader){

loc0:
    if(*reader>2){
        //printf("%d\n", ar[*reader]);
        goto loc1;
    }
    if(*reader==0){
        ar[*reader] = *ta;
        //printf("%d\n", ar[*reader]);
        *reader+=1;
        goto loc0;
    }
    if(*reader==1){
        ar[*reader] = *tb;
        //printf("%d\n", ar[*reader]);
        *reader+=1;
        goto loc0;
    }
    if(*reader==2){
        ar[*reader] = *tc;
        *reader+=1;
        //printf("%d\n", ar[*reader]);
        goto loc0;
    }
loc1:
    while(*reader<30){
        ar[*reader] = *ta + *tc;
        *ta = *tb;
        *tb = *tc;
        *tc = ar[*reader];
        //printf("%d\n", ar[*reader]);
        *reader+=1;
    }
}

int main()
{
    int ar[30];
    int ta = 0;
    int tb = 1;
    int tc = 1;
    int reader = 0;
    printf("let's go\n");
    populator(ar, &ta, &tb, &tc, &reader);
    for(int i=0;i<30;i++){
        printf("%d\n", ar[i]);
    }
    return 0;
}
