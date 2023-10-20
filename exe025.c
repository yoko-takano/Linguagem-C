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
    printf("Atualmente, voc� tem %d anos.\n", idade);

    if (idade >= 18) {
        printf("Voc� tem ou j� fez dezoito anos.\nEspero que voc� tenha se alistado!\n\n");
    } else {
        printf("Voc� ainda n�o tem 18 anos, n�o precisa se alistar.\n\n");
    }
}
