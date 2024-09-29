#include <stdio.h>

void even(int x){
    if(x % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}

void main(){
    int a;
    printf("Enter Number Here : ");
    scanf("%d", &a);
    even(a);
}

