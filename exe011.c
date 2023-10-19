#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int com = rand() % 5 + 1;
    int usu;
    printf("Vou pensar em um número entre 1 e 5. Tente advinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%d", &usu);
    printf("Eu pensei no número %d e você pensou no %d.", com, usu);
}
