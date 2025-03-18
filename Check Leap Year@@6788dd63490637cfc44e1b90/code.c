#include <stdio.h>

int main() {
    int year;
    
    // Input from user
   
    scanf("%d", &year);
    
    // Check leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year", year);
    } else {
        printf("Not a leap year", year);
    }
    
    return 0;
}
