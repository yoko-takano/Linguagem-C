#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    printf("Digite um n�mero real: ");
    scanf("%f", &m);
    printf("Voc� digitou o valor inteiro %d. Obrigada!\n", n);
    printf("Voc� digitou o valor real %.2f. Obrigada!\n", m);
}
