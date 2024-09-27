#include <stdio.h>
void main(){
    int n, i = 1;
    printf("Enter Number Here : ");
    scanf("%d", &n);
    while(n >=1){
        printf("%d\n", i);
        n--;
        i++;
    }
}