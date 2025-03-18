#include <stdio.h>

int main() {
    int num;

    // Input from user

    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("Even", num);
    } else {
        printf("Odd", num);
    }

    return 0;
}
