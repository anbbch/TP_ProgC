#include <stdio.h>
#include <math.h>

int main() {
    double r = 6;

    double aire = M_PI * r * r;
    double perimetre = 2 * M_PI * r;

    printf("L'aire du cercle = %.2f\n", aire);
    printf("Le périmètre du cercle = %.2f\n", perimetre);

    return 0;
}




