// To Define The Division Of Students
#include <stdio.h>
void main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 60) {
        printf("First Division\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Second Division\n");
    } else if (percentage >= 40 && percentage < 50) {
        printf("Third Division\n");
    } else if (percentage < 40) {
        printf("Fail\n");
    } else {
        printf("Invalid input\n");
    }
}
