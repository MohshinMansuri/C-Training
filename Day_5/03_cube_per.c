#include <stdio.h>

void cube(int a){
    int num;
    num = a * a * a;
    printf("Cube of %d : %d", a, num);
    printf("\nThanks");
}
void main(){
    int a;
    printf("Enter Number Here : ");
    scanf("%d", &a);
    cube(a);
}


