#include <stdio.h>
#include <string.h>

int esPalindromo(char palabra[]) {
    int longitud = strlen(palabra);
    int i, j;

    for (i = 0, j = longitud - 1; i < j; i++, j--) {
        if (palabra[i] != palabra[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palabra[100];

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    if (esPalindromo(palabra)) {
        printf("La palabra \"%s\" Chi es una palabra palindromo.\n", palabra);
    } else {
        printf("La palabra \"%s\" No es una palabra palindromo.\n", palabra);
    }

    return 0;
}
