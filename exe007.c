#include <stdio.h>
#include <locale.h>
#define TOTAL 22

void main(){
    setlocale(LC_ALL, "Portuguese");
    const int SOMA = 8;
    printf("%d\n", TOTAL);
    printf("%d\n", SOMA);
}
