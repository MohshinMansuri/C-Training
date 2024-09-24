#include <stdio.h>

void main(){
    int num;
    int sum;
    for (num = 1; num<=10; num++){
        sum += num;
        printf("%d\n", num);
    }
    printf("sum = %d", sum);
}