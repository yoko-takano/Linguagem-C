#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 28;
    float peso = 70.50;
    char sexo = 'F';
    char nome[] = "Yoko";

    printf("%s é do sexo %c, tem %i anos e pesa %.2f kg.\n", nome, sexo, idade, peso);
}
