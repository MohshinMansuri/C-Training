#include <stdio.h>

void main(){
    int sum = 0;
    for(int a; a <=10; a++){
        sum += a;
        printf("%d\n", a);
    }
    printf("Sum : %d", sum);
}