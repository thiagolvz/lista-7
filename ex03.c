#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;     
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nAntes da troca:\n");
    printf("A = %d, B = %d\n", A, B);

    troca(&A, &B);

    printf("\nApos a troca:\n");
    printf("A = %d, B = %d\n", A, B);

    return 0;
}
