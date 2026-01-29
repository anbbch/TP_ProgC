#include <stdio.h>

int main() {

    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        /* Si divisible par 11 -> on ignore ce nombre */
        if (i % 11 == 0) {
            continue;
        }

        /* Si divisible par 5 ou par 7 -> on l'ajoute */
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        /* Si la somme dépasse 5000 -> on stop */
        if (somme > 5000) {
            printf("La somme est superieure a 5000, arret de la boucle.\n");
            break;
        }
    }

    printf("La somme finale est : %d\n", somme);

    return 0;
}
