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
    printf("+         Adi��o\n");
    printf("-         Subtra��o\n");
    printf("*         Multiplica��o\n");
    printf("/         Divis�o\n");
    printf("============================\n");

    char op;
    printf("Digite a op��o: ");
    fflush(stdin);
    scanf("%c", &op);
    switch (op) {
    case '+':
        fim = n1 + n2;
        printf("Somat�ria: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    case '-':
        fim = n1 - n2;
        printf("Diminui��o: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    case '*':
        fim = n1 * n2;
        printf("Multiplica��o: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    case '/':
        fim = n1 / n2;
        printf("Divis�o: %.f %c %.f = %.f", n1, op, n2, fim);
        break;
    default:
        printf("Apenas as opera��es apresentadas.");
        break;
    }
    printf("\n\n");
}
