#include <stdio.h>

void main(){
    FILE *fptr;
    char xx[100];
    fptr = fopen("moh.txt", "r");

    fgets(xx, 100, fptr);

    printf("%s", xx);

    fclose(fptr);
}
