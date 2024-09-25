// To Find Out Cube of Any Number
#include <stdio.h>

int main() {
    int number, cube, i = 1;
    
    printf("Enter a number to find its cube: ");
    scanf("%d", &number);

    cube = 1;
    while (i <= 3) {
        cube *= number;
        i++;
    }
    printf("The cube of %d is: %d\n", number, cube);

    return 0;
}
