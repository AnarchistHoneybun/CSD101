#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Cricketer{
    char name[15];
    int age;
    int game_num;
    int avg;

};

int compareAvg(const void *s1, const void *s2){
    struct Cricketer *e1 = (struct Cricketer *)s1;
    struct Cricketer *e2 = (struct Cricketer *)s2;
    return e1->avg - e2->avg;

}

int main()
{
    srand(time(NULL));
    struct Cricketer player[20];
    char namebank[20][15]={"Noor","Deandra","Simone","Mona","Bryanna","Aliya","Liana","Aliah",
                            "Patience","Marion","Maren","Kaitlynn","Katelyn","Marin","Mckenzie",
                            "Keona","Brielle","Maggie","Maddie","Gloria"};
    for(int i=0;i<20;i++){
        strcpy(player[i].name, namebank[i]);
        player[i].age = (rand()%21)+14;
        player[i].game_num = (rand()%200)+10;
        player[i].avg = rand()%350;

    }
    printf("    Name  | Age | Games Played | Average Runs\n...............................................\n");

    for(int i=0;i<20;i++){
        printf("%8s  |%4d |%12d  |%12d\n", player[i].name, player[i].age, player[i].game_num, player[i].avg);
    }

    qsort(player, 20, sizeof(struct Cricketer), compareAvg);
    printf("\n\nSorted list: \n");
    printf("    Name  | Age | Games Played | Average Runs\n...............................................\n");
    for(int i=0;i<20;i++){
        printf("%8s  |%4d |%12d  |%12d\n", player[i].name, player[i].age, player[i].game_num, player[i].avg);
    }

    return 0;
}
