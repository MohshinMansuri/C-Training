#include <stdio.h>

int main() {
    int m, n;

    // Input an integer m
    printf("Enter an integer m: ");
    scanf("%d", &m);

    // Determine the value of n
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    // Output the value of n
    printf("The value of n is: %d\n", n);

    return 0;
}
