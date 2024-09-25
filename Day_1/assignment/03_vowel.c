// To Find Vowel Or Consonant
#include <stdio.h>
void main() {
    char c;
    int islower, isupper;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    islower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isupper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (islower || isupper) {
        printf("%c is a vowel.\n", c);
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c is a consonant.\n", c);
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }
}
