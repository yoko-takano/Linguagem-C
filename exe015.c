#include <stdio.h>
#include <string.h>

void main() {
    float media = 5.5;
    char sit[10];
    strcpy(sit, (media>7)?"aprovado":"reprovado");
    printf("Media: %.2f\n", media);
    printf("Status: %s", sit);
}
