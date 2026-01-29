#include <stdio.h>

int main() {

    int tests[] = {0, 4096, 65536, 65535, 1024};
    int nTests = 5;

    for (int t = 0; t < nTests; t++) {
        int n = tests[t];

        printf("Le nombre %d en binaire : ", n);

        /* Cas spécial */
        if (n == 0) {
            printf("0\n");
            continue;
        }

        int temp = n;
        int bits[32];      // stocke les bits
        int i = 0;

        /* Conversion : division par 2 */
        while (temp > 0) {
            bits[i] = temp % 2;   // reste : 0 ou 1
            temp = temp / 2;
            i++;
        }

        /* Affichage dans le bon ordre */
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", bits[j]);
        }

        printf("\n");
    }

    return 0;
}
