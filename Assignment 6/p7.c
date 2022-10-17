#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quotient(int a,int b);
int remain(int a,int b);
void split(int input,int length);

int main()
{
    int input;
    printf("Input number between 1 and 32767->");
    scanf("%d",&input);
    int length = snprintf( NULL, 0, "%d", input);
    split(input,length);
    return 0;
}

int quotient(int a,int b){
    int q=a/b;
    return q;
}
int remain(int a,int b){
    int r=a%b;
    return r;
}
void split(int input,int length){
    int cut;
    for(int i=length;i>0;i--){
        cut=round(pow(10,i-1));
        printf("%d ",quotient(input,cut));
        input=remain(input,cut);
    }
}
