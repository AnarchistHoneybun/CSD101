#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct sent{
    int rolln;
    char name[15];
    char dept[15];
    int join_yr;

};

void record_printer_year(struct sent s[160], int year_check);
void record_printer_roll(struct sent s[160], int roll_check);

int main()
{
    srand(time(NULL));
    //Filling data in the sent structs
    char depts[4][15]={"Civil","Mechanical","Economics","Maths"};
    int years[4]={2015,2016,2017,2018};
    char names[10][10]={"Parker","Devan","Corrina","Jim","Marian","Davon","Shemar","Drew","Sheila","Taniya"};
    struct sent s[160];
    for(int i=0,j=0;i<4;i++){
        for(int k=0;k<4;k++){
            for(int l=0;l<10;l++){
                s[j].join_yr = years[i];
                strcpy(s[j].dept, depts[k]);
                s[j].rolln = j;
                strcpy(s[j].name, names[rand()%10]);
                j+=1;
            }
        }
    }
    //testing if data is filled properly
    //int test = rand()%160;
    //printf("%d %s %s %d", s[test].join_yr, s[test].dept, s[test].name, s[test].rolln);
    //for(int test=0;test<160;test++){
    //    printf("%d. %d %s %s %d\n", test+1, s[test].join_yr, s[test].dept, s[test].name, s[test].rolln);
    //}

    int year_check;
    printf("Enter year(2015/2016/2017/2018): ");
    scanf("%d", &year_check);
    record_printer_year(s, year_check);

    int roll_check;
    printf("Enter roll no(1-160): ");
    scanf("%d", &roll_check);
    record_printer_roll(s, roll_check);
    return 0;
}

void record_printer_year(struct sent s[160], int year_check){
    printf("YEAR  DEPARTMENT    NAME ROLLNO\n");
    for(int i=0;i<160;i++){
        if(s[i].join_yr==year_check){
            printf("%d |%10s|%7s|%d\n", s[i].join_yr, s[i].dept, s[i].name, s[i].rolln);
        }
    }

}

void record_printer_roll(struct sent s[160], int roll_check){
    for(int i=0;i<160;i++){
        if(s[i].rolln==roll_check){
            printf("Year of joining:%d\nDepartment: %s\nName: %s\n", s[i].join_yr, s[i].dept, s[i].name, s[i].rolln);
        }
    }
}
