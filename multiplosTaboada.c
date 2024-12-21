#include <stdio.h>
//descobrindo o multiplos - taboada 0 - 10

int main (){
    
    int n = 0;
    int i = 0;
    int multiplo = 0;
    
     scanf("%d", &n);
     
     while (i <= 10) {
     	multiplo = n * i;
         printf("%d x %d = %d \n", n , i, multiplo);
         i++;
     }
    
    
    return 0;
}
