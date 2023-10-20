#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int d = data -> tm_mday;
    int m = data -> tm_mon + 1; // Janeiro é o mês 00
    int a = data -> tm_year + 1900; // Inicia a contagem daqui
    printf("Data: %i/%i/%i", d, m, a);
}
