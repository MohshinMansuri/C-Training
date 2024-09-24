#include <stdio.h>

void main(){
    int day;
    printf("\nEnter the Day : ");
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednusday");
        break;
        case 5:
        printf("Thurday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Satarday");
        break;
        default:
        printf("Please Enter the Currect Day");
    }
    printf("\nThank You");
    
    
}