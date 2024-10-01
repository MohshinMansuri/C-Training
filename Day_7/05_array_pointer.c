#include <stdio.h>

void main(){
    int xx[4] = {22, 23, 24, 25};
    int i;
    for (i = 0; i < 4; i++){
        printf("\n%p", &xx[i]);
    }
}