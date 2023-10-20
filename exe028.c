#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("-----------------------------------------\n");
    printf("Me diga um número e eu te direi se ele é:\n");
    printf("Positivo\nNegativo\nNulo\n");
    printf("-----------------------------------------\n");
    int n1;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &n1);
    if (n1 > 0) {
        printf("O valor %d é positivo!\n\n", n1);
    } else if  (n1 < 0) {
        printf("O valor %d é negativo!\n\n", n1);
    } else {
        printf("O valor %d é nulo!\n\n", n1);
    }
}
