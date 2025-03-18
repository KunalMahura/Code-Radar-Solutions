#include <stdio.h>

int main() {
    int a;
    scanf("%d%d",&a);
    if(a>0){
        printf("Positive", a);
    }
    else if(a<0){
         printf("Negative", a);
    }
    else if(a==0){
         printf("Zero", a);
    }
    
    return 0;
}
// Your code here...