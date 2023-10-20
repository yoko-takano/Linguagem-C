#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, fim;
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%f", &n2);
    printf("============================\n");
    printf("+         Adição\n");
    printf("-         Subtração\n");
    printf("*         Multiplicação\n");
    printf("/         Divisão\n");
    printf("============================\n");

    char op;
    printf("Digite a opção: ");
    fflush(stdin);
    scanf("%c", &op);
    switch (op) {
    case '+':
        fim = n1 + n2;
        printf("Somatória: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    case '-':
        fim = n1 - n2;
        printf("Diminuição: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    case '*':
        fim = n1 * n2;
        printf("Multiplicação: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    case '/':
        fim = n1 / n2;
        printf("Divisão: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    default:
        printf("Apenas as operações apresentadas.");
        break;
    }
    printf("\n\n");
}
