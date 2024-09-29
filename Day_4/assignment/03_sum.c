#include <stdio.h>
void main(){
    int a[3];
    int sum = 0;
    printf("Enter The Array Here\n");
    for(int i = 0 ; i <3; i++){
        printf("Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++){
    sum += a[i];
    }
    printf("Sum : %d", sum);
}

