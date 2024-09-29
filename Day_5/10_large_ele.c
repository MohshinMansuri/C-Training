#include <stdio.h>

void large()
{
    int a[3];
    printf("Enter Array\n");
    for (int i = 0; i < 3; i++){
        printf("Enter Element %d : ", i);
        scanf("%d", &a[i]);
    }
    int num = 0;
    for (int i = 0; i < 3; i++){
        if (a[i] > num){
            num = a[i];
        }
    }
    printf("Largest Number is : %d", num);
}

void main(){
    large();
}









