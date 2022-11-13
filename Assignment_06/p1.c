#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x;
    x=fabs(7.5);
    printf("%d\n",x);
    x=floor(7.5);
    printf("%d\n",x);
    x=fabs(0.0);
    printf("%d\n",x);
    x=ceil(0.0);
    printf("%d\n",x);
    x=fabs(-6.4);
    printf("%d\n",x);
    x=ceil(-fabs(-8+floor(-5.5)));
    printf("%d\n",x);
/*  Answers:
   7
   7
   0
   0
   6
   -14
*/
}
