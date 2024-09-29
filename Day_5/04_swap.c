#include <stdio.h>

void swap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("a : %d\nb : %d", a, b);
}

void main(){
    int a,b;
    printf("Enter 2 Numbers Here : ");
    scanf("%d %d", &a, &b);
    swap(a,b);
}




