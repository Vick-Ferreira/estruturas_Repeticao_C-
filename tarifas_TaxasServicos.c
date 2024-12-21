#include <stdio.h>

int main() {
	
	int kWh  = 0;
	double tarifa  = 0.0;
	double taxa  = 0.0;
	double servico  = 0.0;
	
	
    scanf("%d", &kWh);
    scanf("%lf", &tarifa);
    scanf("%lf", &taxa);
    scanf("%lf", &servico);
	
	double total = (kWh * tarifa)  + taxa + servico;
	
	
    printf("Dados do faturamento:\n");
	printf("Consumo............:%d kWh\n", kWh);
	printf("Tarifa (R$)........:%.3lf\n", tarifa);
	printf("Valor consumo (R$):%.2lf\n", (kWh * tarifa));
	printf("Taxas e impostos...:%.2lf\n", taxa);
	printf("Servicos...........:%.2lf\n", servico);
	printf("TOTAL (R$)...........:%.2lf\n", total);

    return 0;
	
	
}
