#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Bankledger{
    int accnum;
    char name[15];
    int balance;

};

void mincheck(struct Bankledger customer[15]);

int main()
{
    srand(time(NULL));
    struct Bankledger customer[15];
    //setting up the struct array
    char names[15][15]={"Vanesa", "Silas", "Jaron", "Adan", "William", "Pamela", "Ean", "Casey", "Madalyn", "Mya", "Odalis", "Kayla", "Michelle", "Trenton", "Jarett"};
    for(int i=0;i<15;i++){
        customer[i].accnum = rand();
        strcpy(customer[i].name, names[i]);
        customer[i].balance = rand()%200;
    }
    mincheck(customer);
    int request;
    printf("Enter 1 to deposit or 0 for withdrawal: ");
    scanf("%d", &request);
    if(request==1){
        int acct_num;
        printf("Enter account number: ");
        scanf("%d", &acct_num);
        int amount;
        printf("Enter amount: ");
        scanf("%d", &amount);
        for(int i=0;i<15;i++){
            if(customer[i].accnum == acct_num){
                customer[i].balance+=amount;
                printf("Your new balance is: %d", customer[i].balance);
            }
        }
    }else if(request==0){
        int acct_num;
        printf("Enter account number: ");
        scanf("%d", &acct_num);
        int amount;
        printf("Enter amount: ");
        scanf("%d", &amount);
        for(int i=0;i<15;i++){
            if(customer[i].accnum == acct_num){
                if(customer[i].balance<amount){
                    printf("The Balance is insufficient for specified withdrawal.");

                }else{
                    customer[i].balance-=amount;
                    printf("Your new balance is: %d", customer[i].balance);
                }
            }
        }
    }
    return 0;
}


void mincheck(struct Bankledger customer[15]){
    printf("Customers who have balance below $100->\n");
    for(int i=0;i<15;i++){
        if(customer[i].balance<100){
            printf("Name: %s\nAcc no:%d\n\n", customer[i].name, customer[i].accnum);

        }
    }

}
