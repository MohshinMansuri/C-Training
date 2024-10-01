// Pre-Defined Funtion
// those function are inbuild in laboratory file of c , is called system defined fuction it is also known as predefined function

// 1. mathmetical function - math.h
// 2. Abs Function - abs stands for absolute values , It returns positive value, it means user can input neg/+ve number it returns positive only

#include <stdio.h>

void main(){
    int a = -100;
    int x = abs(a);
    printf("Value of A : %d\n", a);
    printf("Absolute Value of A : %d", x);
}