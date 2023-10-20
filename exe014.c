#include <stdio.h>
void main() {
    int a = 6;
    int b = 6;
    int c = (a <= b);
    int d = (a != b);
    printf("O resultado e %i.\n", c);
    printf("O resultado e %i.", d);
}
