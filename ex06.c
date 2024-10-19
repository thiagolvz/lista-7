#include <stdio.h>

int ocorreDentro(char *str1, char *str2) {
    char *p1, *p2, *pInicio;

    for (p1 = str1; *p1 != '\0'; p1++) {
        pInicio = p1;  
        p2 = str2;    

        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return 1;  
        }

        p1 = pInicio;
    }

    return 0;  
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    gets(str1);  
    printf("Digite a segunda string: ");
    gets(str2);

    if (ocorreDentro(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string nao ocorre dentro da primeira.\n");
    }

    return 0;
}
