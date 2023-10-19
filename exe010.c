#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n = rand() % 10;
    printf("Eu gerei o número (%d)", n);
}
