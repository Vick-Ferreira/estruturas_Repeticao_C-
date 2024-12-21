#include <stdio.h>
int main(){
      int a = 0, b = 0;
 
      while(a < 10 && b < 5){
            if(b % 2 == 0){
                   a++;
            }
            b++;
     }
     printf("Valor de a: %d, ", a);
     printf("Valor de b: %d", b);
}
 