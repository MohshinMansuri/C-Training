// Write a Program find a divison of student 
// average marks >= 60 =- 1st
// average marks >= 50 - 2nd
// average marks >= 40 - 3rd
// otherwise fail

#include <stdio.h>

int main(){
    int math, eng, sci, total, avg;
    printf("Enter 3 Subjects Marks : ");
    scanf("%d %d %d", &math, &eng, &sci);
    total = math + eng + sci;
    avg = total / 3;
    printf("\n avg = %d", avg);
    if (avg >= 60){
        printf("\n First");
    }
    else if (avg >= 50){
        printf("\n Second");
    }
    else if(avg >=40){
        printf("\n Third");
    }
    else{
        printf("\n Fail");
    }
    return 0;
}