#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float total, desc;
    printf("Digite o total da compra: ");
    fflush(stdin);
    scanf("%f", &total);
    printf("O total da compra foi R$%.2f.\n", total);
    if (total >= 500) {
        desc = total*(0.10);
        printf("Por fazer mais de R$500,00 em compras, você ganhou desconto!\n");
        printf("10%% de desconto, ou seja, R$%.2f no total.\n", desc);
        printf("Total final com desconto ficou em R$%.2f.", total-desc);
    }
}
