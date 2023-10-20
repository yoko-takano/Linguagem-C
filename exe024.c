#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int nasc;
    printf("Digite o ano do seu nascimento: ");
    fflush(stdin);
    scanf("%d", &nasc);
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data -> tm_year + 1900;
    int idade = ano - nasc;
    printf("Ano de Nascimento: %d\nAno atual: %d\nIdade: %d\n", nasc, ano, idade);
    if (idade >= 65) {
        printf("Dirija-se à fila preferencial!");
    }
}
