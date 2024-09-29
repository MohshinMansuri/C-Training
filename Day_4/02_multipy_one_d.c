#include <stdio.h>

void main(){
    int x = 3;
    int a[x], b[x], c[x];
    int i;
    printf("Enter A Array Data here : ");
    for (i = 0; i < x; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter B Array Data here : ");
    for (i = 0; i < x; i++){
        scanf("%d", &b[i]);
    }
    for (i = 0; i < x; i++){
        c[i] = a[i] * b[i];
    }
    printf("Multiplication of A & B : ");
    for (i = 0; i < x; i++ ){
    printf("%d\t", c[i]);
    }

}