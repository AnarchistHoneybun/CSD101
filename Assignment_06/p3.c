#include <stdio.h>
#include <stdlib.h>

int calculateCharges(int hours[]);
int main(){
    int t_hour,t_charge;
    t_hour=t_charge=0;
    int hours[3];
    int hours_copy[3];
    int *charge;
    for(int i=0;i<3;i++){
        printf("Enter hours parked by Car no.%d: ",i+1);
        scanf("%d",&hours[i]);
    }
    for(int i=0;i<3;i++){
        hours_copy[i]=hours[i];
    }
    charge=calculateCharges(hours_copy);
    printf("Car    Hours    Charge\n");
    for(int i=0;i<3;i++){
        printf("%3d    %5d    %6d\n",i+1,hours[i],charge[i]);
    }
    for(int i=0;i<3;i++){
        t_hour+=hours[i];
        t_charge+=charge[i];
    }
    printf(".......................\n");
    printf("Total:%6d%10d",t_hour,t_charge);

    return 0;
}
int calculateCharges(int hours_copy[]){
    for(int i=0;i<3;i++){
        if(hours_copy[i]<=3){
            hours_copy[i]=20;
        }else if(hours_copy[i]<31){
            hours_copy[i]=((hours_copy[i]-3)*10)+20;
        }else{
            hours_copy[i]=300;
        }
    }
    return hours_copy;
}
