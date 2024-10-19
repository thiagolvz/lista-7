#include <stdio.h>

int main() {
    int inteiro = 42;
    float real = 7.89;
    char caractere = 'X';

    int *pInteiro;
    float *pReal;
    char *pCaractere;

    pInteiro = &inteiro;
    pReal = &real;
    pCaractere = &caractere;

    printf("Antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *pInteiro = 99;
    *pReal = 12.34;
    *pCaractere = 'Z';

    printf("\nApos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
