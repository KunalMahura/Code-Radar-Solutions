// Your code here..
#include <stdio.h>

int main() {
    int num;
    
    // Input from user
   
    scanf("%d", &num);
    
    // 
    if ((num % 5 == 0) || (num % 11 == 0)) {
        printf("Divisible", num);
    } else {
        printf("Not Divisibl ", num);
    }
    
    return 0;
}
