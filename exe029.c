#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("-----------------------------------------\n");
    printf("Me diga dois n�meros e eu colocarei\n");
    printf("os dois em ordem crescente.\n");
    printf("-----------------------------------------\n");
    int n1, n2;
    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("Os n�meros em ordem s�o %d e %d.\n\n", n2, n1);
    } else if  (n1 < n2) {
        printf("Os n�meros em ordem s�o %d e %d.\n\n", n1, n2);
    } else {
        printf("Os n�meros %d e %d s�o iguais!\n\n", n1, n2);
    }
}
