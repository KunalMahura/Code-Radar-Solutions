#include <stdio.h>

int main() {
    char ch;

    // Input from user
    
    scanf("%c", &ch);

    // Check if it's a vowel
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    }
    // Check if it's a consonant (A-Z or a-z but not a vowel)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant");
    }
    // Check if it's a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If not letter or digit, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}
