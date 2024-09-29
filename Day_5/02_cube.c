// Find Cube using none perametrized method
#include <stdio.h>

void cube(){
    int num, a;
    printf("Enter Number Here : ");
    scanf("%d", &a);
    num = a * a * a;
    printf("Cube of %d : %d", a, num);
    printf("\nThanks");
}
void main(){
    cube();
}