#include <stdio.h>

int main() {
    int num;

    // Input from user

    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d Even", num);
    } else {
        printf("%d Odd", num);
    }

    return 0;
}
