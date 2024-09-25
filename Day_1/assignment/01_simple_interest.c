// To Find Out Simple Interest

#include <stdio.h>
void main(){
    int principle, rate, time;
    printf("enter the principle amount: ");
    scanf("%d", &principle);

    printf("enter the rate: ");
    scanf("%d", &rate);

    printf("enter the time period : ");
    scanf("%d", &time);

    int simple_interest = (principle * rate * time) / 100;
    printf("The simple interest is %d", simple_interest);
}