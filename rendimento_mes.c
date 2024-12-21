#include <stdio.h>

int main() {
    float saldo_inicial, saldo_final, rendimento;
    int meses = 12;
    float taxa = 0.003; // 0.3% como decimal

    scanf("%f", &saldo_inicial);

    if (saldo_inicial <= 0) {
        printf("Saldo insuficiente!\n");
    } else {
        saldo_final = saldo_inicial;
        int i = 0;

        // Calcula o rendimento para cada mês
        do {
            saldo_final += saldo_final * taxa;
            i++;
        } while (i < meses);

        rendimento = saldo_final;  // saldo final já contém o rendimento total
        printf("Rendimento=R$ %.2f\n", rendimento);
    }

    return 0;
}

