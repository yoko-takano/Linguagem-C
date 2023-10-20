#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data -> tm_year + 1900;
    printf("Atualmente estamos no ano de %d.\n", ano);

    int nasc;
    printf("Digite o ano do seu nascimento: ");
    fflush(stdin);
    scanf("%d", &nasc);

    printf("--------------------------------------\n");
    int idade = ano - nasc;
    printf("Atualmente, você tem %d anos.\n", idade);

    if (idade >= 18) {
        printf("Você tem ou já fez dezoito anos.\nEspero que você tenha se alistado!\n\n");
    } else {
        printf("Você ainda não tem 18 anos, não precisa se alistar.\n\n");
    }
}
