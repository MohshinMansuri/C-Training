#include <stdio.h>

void main(){
    int age = 22;
    
    int *ptr = &age;
    printf("\n%d", age);
    printf("\n%p", ptr);
    printf("\n%d", *ptr);
}