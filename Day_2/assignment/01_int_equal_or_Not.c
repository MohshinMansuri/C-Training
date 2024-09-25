#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the integers are equal or not
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else {
        printf("Numbers are not equal.\n");
    }

    return 0;
}
