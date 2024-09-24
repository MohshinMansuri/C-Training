#include <stdio.h>

void main(){
    int a, b, c;
    printf("\nEnter 3 Numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c ){
        printf("A is Largest Number");
    }
    else if (b > a && b > c ){
        printf("B is Largest Number");
    }
    else if (c > b && c > a ){
        printf("C is Largest Number");
    }
    else{
        printf("Please Enter Currect Number.");
    }
}