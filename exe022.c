#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3;
    printf("Digite sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    n3 = (n1+n2)/2;
    printf("Primeira nota: %.2f\nSegunda nota: %.2f\nMedia Final: %.2f\n", n1, n2, n3);
    if (n3 >= 7) {
        printf("Que notão, hein? Meus parabéns!");
    }
}
