// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {  // Rows
        for (int j = 0; j < n; j++) {  // Columns
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
