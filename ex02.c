#include <stdio.h>

int main() {
    int var1 = 15;
    int var2 = 30;

    printf("Endereco de var1: %p\n", (void*)&var1);
    printf("Endereco de var2: %p\n", (void*)&var2);

    if (&var1 > &var2) {
        printf("Maior endereco: %p (var1)\n", (void*)&var1);
    } else {
        printf("Maior endereco: %p (var2)\n", (void*)&var2);
    }

    return 0;
}
