#include <stdio.h>

int main() {
    char c;

    // Input a character from the user
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Use switch statement to check if the character is a vowel or consonant
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", c);
            break;
        default:
            // Check if input is an alphabet
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                printf("%c is a consonant.\n", c);
            } else {
                printf("Invalid input, not an alphabet.\n");
            }
    }

    return 0;
}
