#include <stdio.h>

int main() {

    int compteur = 5;  // Teste avec d'autres valeurs (< 10)

    if (compteur >= 10 || compteur <= 0) {
        printf("Erreur : compteur doit etre strictement inferieur a 10 et > 0.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {          // lignes
        for (int j = 1; j <= i; j++) {             // colonnes

            if (i == compteur) {
                // dernière ligne : que des *
                printf("* ");
            }
            else if (j == 1 || j == i) {
                // bords du triangle
                printf("* ");
            }
            else {
                // intérieur du triangle
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
