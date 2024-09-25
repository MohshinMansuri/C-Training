#include <stdio.h>

void main(){
    int month;
    char ans;
    do{
    printf("Enter the Month : ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("Number of Days is January : 31");
        break;
    case 2:
        printf("Number of Days is February : 28/29");
        break;
    case 3:
        printf("Number of Days is March : 31");
        break;
    case 4:
        printf("Number of Days is April : 30");
        break;
    case 5:
        printf("Number of Days is May : 31");
        break;
    case 6:
        printf("Number of Days is June : 30");
        break;
    case 7:
        printf("Number of Days is July : 31");
        break;
    case 8:
        printf("Number of Days is August : 31");
        break;
    case 9:
        printf("Number of Days is September : 30");
        break;
    case 10:
        printf("Number of Days is October : 31");
        break;
    case 11:
        printf("Number of Days is November : 30");
        break;
    case 12:
        printf("Number of Days is December : 31");
        break;
    default:
        printf("Wrong Month");
        break;
    }
    printf("\nPress Y to continue : ");
    scanf("%s", &ans);
    }while(ans == 'y' || ans == 'Y');
}