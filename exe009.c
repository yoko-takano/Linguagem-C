#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char r;
    char s;
    char nome[30];
    printf("Digite apenas uma letra: ");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Voce digitou as letras \"%c\" e \"%c\".\n", r, s);
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Voce digitou \"%s\"!", nome);
}
