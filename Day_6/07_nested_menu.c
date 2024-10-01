// Write a prgram to create a nested structure bill & pay
#include <stdio.h>

void main(){
    struct bill
    {
        int amount;
    };
    struct pay
    {
        struct bill b1;
        int salary;        
    };
    struct pay p1;
    int x;
    char ans;
    do{
        printf("Welcome to Menu\n");
        printf("1. Bill\n");
        printf("2. Pa\n");
        printf("3. Exit\n");
        printf("Enter 1 to 3 : ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter Amount Here : ");
            scanf("%d", &p1.b1.amount);
            printf("Amount : %d\n", p1.b1.amount);
            break;

        case 2:
            printf("Enter Salary Here : ");
            scanf("%d", &p1.salary);
            printf("Salary : %d\n", p1.salary);
            break;

        case 3:
            printf("Exit\n");
            break;
        
        default:
            printf("Wrong Choise");
            break;
        }
    printf("Enter Y to continue : ");
    scanf("%s", &ans);
    }while (ans == 'y');

    

}