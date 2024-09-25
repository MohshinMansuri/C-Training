#include <stdio.h>

void main(){
    int x, ans;
    int empno, salary, bonus, pf, netsal,md, mdhr, hrpay, wd, ot, totwdhr, totwdhrpay;
    int wdhr, wdhrpay, Id, Idhr, Idhrpay, med, hrent, tour, loan, emi, gt;
    char name[20], emailid[30], hno[20];
    int srno, phone;

    do{
    printf("PaySlip");
    printf("\n1. Pay Detail");
    printf("\n2. Mailing Address");
    printf("\n3. Exit");
    printf("\nSelect Choice 1 to 3 : ");
    scanf("%d", &x);
    if (x == 1){
        printf("Welcome to pay Detail Department\n");
        printf("Enter Employee Number Here : ");
        scanf("%d", &empno);
        printf("Enter Employee Name Here : ");
        scanf("%s", &name);
        printf("Enter Employee Salary Here : ");
        scanf("%d", &salary);
        bonus = salary * 10 /100;
        printf("Bonus : %d\n", bonus);
        pf = salary * 5 /100;
        printf("Pf : %d\n", pf);
        netsal = salary + bonus + pf;
        printf("Net Salary : %d\n", netsal);
        printf("Enter Days Of The Month Here : ");
        scanf("%d", &md);
        printf("Enter The Over Time Here : ");
        scanf("%d", &ot);
        printf("Enter Working Days Here : ");
        scanf("%d", &wd);
        printf("Enter Work Hour Payment Here : ");
        scanf("%d", &wdhrpay);
        mdhr = md * 8;
        printf("MDHR : %d\n", mdhr);
        wdhr = wd * 8;
        printf("WDHR : %d\n", wdhr);
        hrpay = salary / mdhr;
        printf("HRPAY : %d\n", hrpay);
        totwdhr = wd + ot;
        printf("TOTWDHR : %d\n", totwdhr);
        totwdhrpay = totwdhr * hrpay;
        printf("TOTWDHRPAY : %d\n", totwdhr);
    }
    else if(x == 2){
        printf("Welcome to add Department\n");
        printf("Enter Houe Number Here : ");
        scanf("%s", hno);
        printf("House Number is : %s\n", hno);
    }
    else{
        printf("Exit\n");
    }
    printf("Enter Y to Continue : ");
    scanf("%s", &ans);
    }while(ans == 'y' || ans == "Y");
}
