#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32];  // Array to store binary digits
    int i = 0;

    // Convert decimal to binary
    while(n > 0) {
        binary[i] = n % 2;  // Store the remainder in the array
        n = n / 2; 
        i++;
    }

    printf("Binary equivalent: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    // Call function
    decimalToBinary(num);

    return 0;
}

