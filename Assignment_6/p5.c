#include <stdio.h>
#include <stdlib.h>

void func(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("* ");
        }
        printf("\n");
    }


}


int main()
{
    int a;
    printf("Enter side length of square->");
    scanf("%d",&a);
    func(a);
    return 0;
}
