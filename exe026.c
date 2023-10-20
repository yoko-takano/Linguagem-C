#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("======= Tabela de Preços =======\n");
    printf("Viagens até 20km      R$0,50/km\n");
    printf("A partir de 20km      R$0,35/km\n");
    printf("================================\n\n");
    float dist, total;
    printf("Digite a distância percorrida(em km): ");
    fflush(stdin);
    scanf("%f", &dist);

    if (dist >= 20) {
        printf("Uma viagem de %.2fkm vai custar R$0,35/km.\n", dist);
        total = dist*0.35;
        printf("Valor Final: R$%.2f.", total);
    } else {
        printf("Uma viagem de %.2fkm vai custar R$0,50/km.\n", dist);
        total = dist*0.50;
        printf("Valor Final: R$%.2f.\n\n", total);
    }
}
