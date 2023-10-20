#include <stdio.h>
#include <locale.h>
void main() {
    char s1[] = "Yoko";
    char s2[] = "Yoka";
    int res = strcmp(s1, s2);
    printf("O resultado da comparacao e %d", res);
}
