#include <stdio.h>

void main(){
    int n, i = 1;
    printf("Enter a Number here : ");
    scanf("%d", &n);
    while (i <= 10){
        printf("%d\n", i*n);
        i++;
    }
}

