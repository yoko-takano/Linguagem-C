#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("---------------------\n");
    printf("Listagem de Alunos\n");
    printf("---------------------\n");
    printf("Nome\t\tNota\n");
    printf("---------------------\n");
    printf("Ana Beatriz\t8.5\n");
    printf("Bianca Martins\t9.0\n");
    printf("Cl�udio S�\t5.5\n");
    printf("Giovana Silva\t7.5\n");
    printf("\n\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\tBeep\n");
    printf("\\n\t=\tNova Linha\n");
    printf("\\t\t=\tTabula��o\n");
    printf("\\\\\t=\tBarra\n");
    printf("%%%%\t=\tPorcentagem\n");
    printf("\\\?\t=\tInterroga��o\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
