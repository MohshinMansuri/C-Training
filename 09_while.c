#include <stdio.h>

void main(){
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);
    while (a>=1){
        printf("%d\n", a);
        a--;
    }
}