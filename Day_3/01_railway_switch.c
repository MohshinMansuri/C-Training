#include <stdio.h>

void main(){
    int x;
    char ans;
    int ticket_no, price;
    char name[20];
    int dis, cpay;
    do{
    printf("<-----------Railway Reservation--------->\n");
    printf("1. Booking\n");
    printf("2. Cancellation\n");
    printf("3. Exit\n");
    printf("Select Choice 1 to 3 : ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Welcome To The Booking Department\n");
        printf("Enter the Ticket Number Here : ");
        scanf("%d", &ticket_no);
        printf("Enter Your Name Here : ");
        scanf("%s", &name);
        printf("Enter the Price Here : ");
        scanf("%d", &price);
        printf("Mr/Mrs %s Your Ticket Has Been Booked\n", name);
        printf("Your Ticket Number : %d\n", ticket_no);
        printf("Ticket Price : %d\n", price);
        break;
    
    case 2:
        printf("Welcome To The Cancellation Page\n");
        printf("Enter the Price Here : ");
        scanf("%d", &price);
        dis = price * 20 /100;
        cpay = price - dis;
        printf("Discount : %d\n", dis);
        printf("Cpay : %d\n", cpay);
        break;
        
    case 3:
        printf("Program Exited");
        break;
    default:
        printf("Please Enter the Correct Choice");
        break;
    }
    printf("\nPress Y to continue : ");
    scanf("%s", &ans);
    }while(ans =='y');

    printf("Program Exited");
    
}