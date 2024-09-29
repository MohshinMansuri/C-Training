#include <stdio.h>

void even(int x){
    int ans = 0;
    for(int i = 2; i<x; i++){
        if (x % i == 0){
            ans += 1;
        }
    }
    if (ans > 0){
        printf("Not Prime");
    }else{
        printf("Prime Number");
    }
}

void main(){
    int a;
    printf("Enter Number Here : ");
    scanf("%d", &a);
    even(a);
}


