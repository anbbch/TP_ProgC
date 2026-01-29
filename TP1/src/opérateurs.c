#include <stdio.h>
#include <stdbool.h>

int main() {

    int a = 16;
    int b = 3;
    bool egal = (a == b);
    bool superieur = (a > b);

    /* Opérateurs arithmétiques */
    printf("a = %d, b = %d\n\n", a, b);
    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustration (a - b) = %d\n", a - b);
    printf("Multiplication (a x b) = %d\n", a * b);
    printf("Division (a / b) = %d\n", a / b);
    printf("Reste (a %% b) = %d\n", a % b);
    printf("Addition (a + b) = %d\n", a + b);

    printf("a est egal a b ? %d\n", egal);
    printf("a est superieur a b ? %d\n", superieur);

    return 0;
}

