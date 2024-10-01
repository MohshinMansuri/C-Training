#include <stdio.h>

void main(){
    struct emp
    {
        int salary, bonus, pf, netsal;
        char name[20];
    };
    struct emp e1;

    printf("Enter Name Here : ");
    scanf("%s", &e1.name);
    printf("Enter Salary Here : ");
    scanf("%d", &e1.salary);
    e1.bonus = e1.salary * 10 / 100;
    printf("Bonus : %d\n", e1.bonus);
    e1.pf = e1.salary * 5 / 100;
    printf("Pf : %d\n", e1.pf);
    e1.netsal = e1.salary + e1.bonus - e1.pf;
    printf("Net Salary : %d\n", e1.netsal);
    printf("Thanks Your");
}