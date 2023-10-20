#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("-----------------------------------------\n");
    printf("Me diga dois números e eu colocarei\n");
    printf("os dois em ordem crescente.\n");
    printf("-----------------------------------------\n");
    int n1, n2;
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("Os números em ordem são %d e %d.\n\n", n2, n1);
    } else if  (n1 < n2) {
        printf("Os números em ordem são %d e %d.\n\n", n1, n2);
    } else {
        printf("Os números %d e %d são iguais!\n\n", n1, n2);
    }
}
