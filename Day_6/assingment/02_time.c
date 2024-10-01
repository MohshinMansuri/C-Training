#include <stdio.h>

void main(){
    struct Time{
        int hours, minutes, seconds;
    };
    struct Time t1;
    struct Time t2;

    printf("Enter t1 Hour : ");
    scanf("%d", &t1.hours);
    printf("Enter t1 Minutes : ");
    scanf("%d", &t1.minutes);
    printf("Enter t1 Seconds : ");
    scanf("%d", &t1.seconds);

    printf("\nEnter t2 Hour : ");
    scanf("%d", &t2.hours);
    printf("Enter t2 Minutes : ");
    scanf("%d", &t2.minutes);
    printf("Enter t2 Seconds : ");
    scanf("%d", &t2.seconds);

    int hours = t1.hours + t2.hours;
    int minutes = t1.minutes + t2.minutes;
    int seconds = t1.seconds + t2.seconds;
    printf("t1 + t2 = %d:%d:%d", hours, minutes, seconds);
    
}





