#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int ans,guess;
    char rerun;
replay:
    ans=rand()%1000;
    printf("I have a number between 1 and 1000\nCan you guess my number?");
    printf("Please type your first guess.\n");
    scanf("%d",&guess);
    while(guess!=ans){
        if(guess<ans){
            printf("Too low. Try again.\n");
            scanf("%d",&guess);
        }else if(guess>ans){
            printf("Too high. Try again.\n");
            scanf("%d",&guess);
        }
    }
    if(guess==ans){
        printf("Excellent! You guessed the number.\n");
    }
    printf("Would you like to play again(y or n)? ");
    scanf(" %c",&rerun);
    if(rerun=='y'){
        goto replay;
    }else if(rerun=='n'){
        printf("Thank you for playing.");
    }else{
        printf("Invalid input. Exiting.");
    }
    return 0;
}
