#include <stdio.h>

void main(){
    int i = 0, n, sum = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    while (i <=n ){
        sum += i;
        i++;
    }
    printf("Sum : %d", sum);
}