#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você digitou o valor inteiro %d. Obrigada!\n", n);
    printf("Você digitou o valor real %.2f. Obrigada!\n", m);
}
