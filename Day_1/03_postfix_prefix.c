#include <stdio.h>

void main(){
    int a = 3, b = 3;
    int x,y;
    x = a++;
    printf("\n%d", x);
    printf("\n%d", a);
    y = ++b;
    printf("\n%d", y);
    printf("\n%d", b);
    printf("\n<------------------------------------------>");
    a = 3;
    x = a++;
    printf("\n%d", x);
    printf("\n%d", a);
    y = ++a;
    printf("\n%d", y);
    printf("\n%d", a);

}