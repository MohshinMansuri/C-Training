#include <stdio.h>

int main() {
    float temp;

    // Input temperature in centigrade
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &temp);

    // Display suitable message
    if (temp < 0) {
        printf("Freezing weather.\n");
    } else if (temp < 10) {
        printf("Very Cold weather.\n");
    } else if (temp < 20) {
        printf("Cold weather.\n");
    } else if (temp < 30) {
        printf("Normal weather.\n");
    } else if (temp < 40) {
        printf("It's Hot.\n");
    } else {
        printf("It's Very Hot.\n");
    }

    return 0;
}
