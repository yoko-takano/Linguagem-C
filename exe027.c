#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("-----------------------------------------\n");
    printf("Me diga um n�mero e eu te direi se ele �:\n");
    printf("Positivo\nNegativo\nNulo\n");
    printf("-----------------------------------------\n");
    int n1;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &n1);
    if (n1 > 0) {
        printf("O valor %d � positivo!\n\n", n1);
    } else if  (n1 < 0) {
        printf("O valor %d � negativo!\n\n", n1);
    } else {
        printf("O valor %d � nulo!\n\n", n1);
    }
}
