#include <stdio.h>

void main(){
    struct Student{
        char name[20];
        int age, total_marks;
    };

    struct Student s1;
    struct Student s2;

    printf("Enter Student 1 Details\n");
    printf("Enter Student 1 Name : ");
    scanf("%s", &s1.name);
    printf("Enter Student 1 Age : ");
    scanf("%d", &s1.age);
    printf("Enter Student 1 Total Marks : ");
    scanf("%d", &s1.total_marks);
    printf("\nEnter Student 2 Details\n");
    printf("Enter Student 2 Name : ");
    scanf("%s", &s2.name);
    printf("Enter Student 2 Age : ");
    scanf("%d", &s2.age);
    printf("Enter Student 2 Total Marks : ");
    scanf("%d", &s2.total_marks);

    int avg = (s1.total_marks + s2.total_marks) / 2;
    printf("Average : %d", avg);
}


