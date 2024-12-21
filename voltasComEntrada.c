#include <stdio.h>
//contagem voltas de 0 at� dados informados de entrada

int main (){
	 
	int i = 0; //contador
    int n = 0;//entrada usuario
	
	scanf("%d", &n);
		
	while(i <= n){
		printf("Volta %d\n", i);
		i++;
	}
	
	return 0;
}
