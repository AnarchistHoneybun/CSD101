#include <stdio.h>
#include <stdlib.h>

int sub5(int a){
    a-=5;
    return a;

}

int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    a=sub5(a);
    printf("%d",a);
}
