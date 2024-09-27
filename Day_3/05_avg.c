#include <stdio.h>

void main(){
    int avg, sum = 0;
    for(int a; a <=10; a++){
        sum += a;
        printf("%d\n", a);
    }

    printf("Sum : %d\n", sum);
    avg = sum / 10;
    printf("Average : %d", avg);
}