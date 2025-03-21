#include <stdio.h>

int main() {
   int grades;
   scanf("%d", &grades);
   switch(grades){

            case 90 ... 100:
            printf("A");
            break;

            case 80 ... 90:
            printf("B");
            break;

            case 70 ... 80:
            printf("C")
            break;

             case 60 ... 70:
            printf("D")
            break;

            case <60 :
            printf("F")
            break;
            
   }
   return 0;
}
       
