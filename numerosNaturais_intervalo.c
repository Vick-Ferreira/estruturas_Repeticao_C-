#include <stdio.h>

int main (){
	 
	int i = 0; //contador
    int n = 0;//entrada usuario
	
	scanf("%d", &n);
	
	//verifica se há numeros naturar no numero que o usuario deu
	if (n < 0) {
        printf("Nao existem numeros naturais nesse intervalo!\n");
    } else {
    	
        do {
            printf("%d ", i);
            i++;
        } while (i <= n);
    }
	return 0;
}
