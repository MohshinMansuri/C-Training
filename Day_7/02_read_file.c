#include <stdio.h>

void main(){
    FILE *fptr;
    char xx[100];
    fptr = fopen("Filename.txt", "r");

    fgets(xx, 100, fptr);

    printf("%s", xx);

    fclose(fptr);
}