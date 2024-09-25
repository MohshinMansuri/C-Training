#include <stdio.h>

void main(){
    int f = 1, n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    while(n>=1){
        f *= n;
        n--;
    }
    printf("Factorial is %d", f);
}