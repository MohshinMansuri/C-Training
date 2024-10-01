// Write a program to write contant in file
#include <stdio.h>

void main(){
    FILE *fptr; // Create File
    char name[200];

    fptr = fopen("moh.txt", "w");  // Open File
    printf("Enter The Name : ");
    scanf("%s", &name);

    fprintf(fptr, name); // Write Data in File

    fclose(fptr);   // Close File
}
