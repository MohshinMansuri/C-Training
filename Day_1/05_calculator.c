#include <stdio.h>

void main(){
    printf("Welcome to Cal");
    int x;
    int a,b,c;
    printf("\n1. Addtiion");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nSelect 1 to 5 : ");
    scanf("%d", &x);
    if (x != 5 ){
    printf("Enter 2 Numbers Here : ");
    scanf("%d %d", &a, &b);
    }
    if (x == 1){
        c = a + b;
        printf("a + b = %d", c);
    }
    else if (x == 2){
        c = a - b;
        printf("a - b = %d", c);
    }
    else if (x == 3){
        c = a * b;
        printf("a * b = %d", c);
    }
    else if (x == 4){
        c = a / b;
        printf("a / b = %d", c);
    }
    else if (x == 5){
        printf("Exit");
    }
    else{
        printf("Please Select the Currect Option");
    }

}