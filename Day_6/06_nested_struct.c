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
    printf("Enter Amount Here : ");
    scanf("%d", &p1.b1.amount);
    printf("Enter Salary Here : ");
    scanf("%d", &p1.salary);
    printf("Amount : %d\n", p1.b1.amount);
    printf("Salary : %d\n", p1.salary);
}