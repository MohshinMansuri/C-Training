#include <stdio.h>

void main(){
    int salary, bonus, pf, netsal;
    printf("\nEnter Salary : ");
    scanf("%d", &salary);
    bonus = salary * 10 /100;
    printf("\nbonus = %d", bonus);
    pf = salary * 5 / 100;
    printf("\npf = %d", pf);
    netsal = salary + bonus - pf;
    printf("\nNetsal = %d \n", netsal);
    if (netsal>=700){
        printf("A Grade");
    }
    else if(netsal>=500){
        printf("B Grade");
    }
    else if(netsal>=300){
        printf("C Grade");
    }
    else{
        printf("Failed");
    }
}