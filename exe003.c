#include <stdio.h>
#include <locale.h>


void main (){
    setlocale(LC_ALL, "Portuguese");
    printf("Biscoito\nMilkshake\nChocolate\n");
    printf("Biscoito\tMilkshake\tChocolate\n");
    printf("Oi, t\budo \rbem\?\n");
    printf("Biscoito\\Milkshake\\Chocolate\n");
    printf("Biscoitinho \a\n");
    printf("Simbolo de porcentagem %%\n");
    printf("C é\n\"SUPER\"\nFácil!");
}
