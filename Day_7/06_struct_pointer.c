#include <stdio.h>

void main(){
    struct bill
    {
        int amount;
    };
    struct bill *b1;

    printf("Enter the amount : ");
    scanf("%d", &b1->amount);
    printf("%d", b1->amount);
}