#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("A %s tem %i anos de idade.\n", "Yoko", 28);
    printf("O seu peso atual � %.2f kg.\n", 70.0);
    printf("Seu sexo � %c.\n", 'F');
}
