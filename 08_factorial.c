#include <stdio.h>

void main(){
    int f = 1, n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for(n; n>=1; n--){
        f *= n;
    }
    printf("Factorial is %d", f);
}