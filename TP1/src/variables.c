#include <stdio.h>

int main() {

    /* i. char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    /* ii. short */
    short s = -32000;
    signed short ss = -1234;
    unsigned short us = 65000;

    /* iii. int */
    int i = -100000;
    signed int si = -2024;
    unsigned int ui = 4000000000U;

    /* iv. long int */
    long int li = -1234567890L;
    signed long int sli = -999999L;
    unsigned long int uli = 3000000000UL;

    /* v. long long int */
    long long int lli = -900000000000LL;
    signed long long int slli = -123456789LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    /* vi. float */
    float f = 3.14f;

    /* vii. double */
    double d = 2.718281828;

    /* viii. long double */
    long double ld = 1.618033988749895L;

    printf("===== Affichage des variables =====\n\n");

    /* Affichage char */
    printf("char c = %c\n", c);
    printf("signed char sc = %d\n", sc);
    printf("unsigned char uc = %u\n\n", uc);

    /* Affichage short */
    printf("short s = %hd\n", s);
    printf("signed short ss = %hd\n", ss);
    printf("unsigned short us = %hu\n\n", us);

    /* Affichage int */
    printf("int i = %d\n", i);
    printf("signed int si = %d\n", si);
    printf("unsigned int ui = %u\n\n", ui);

    /* Affichage long int */
    printf("long int li = %ld\n", li);
    printf("signed long int sli = %ld\n", sli);
    printf("unsigned long int uli = %lu\n\n", uli);

    /* Affichage long long int */
    printf("long long int lli = %lld\n", lli);
    printf("signed long long int slli = %lld\n", slli);
    printf("unsigned long long int ulli = %llu\n\n", ulli);

    /* Affichage float / double / long double */
    printf("float f = %.2f\n", f);
    printf("double d = %.9f\n", d);
    printf("long double ld = %.15Lf\n", ld);

    return 0;
}
