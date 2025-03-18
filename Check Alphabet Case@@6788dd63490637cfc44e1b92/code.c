#include <stdio.h>

int main() {
    char ch;

    // Input from user

    scanf("%c", &ch);

    // Check uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' Uppercase", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' Lowercase", ch);
    } else {
        printf("'%c'Not an alphabet", ch);
    }

    return 0;
}
