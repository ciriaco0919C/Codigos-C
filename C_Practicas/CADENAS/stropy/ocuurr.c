#include <stdio.h>
#include <string.h>



int main() {
    char palabra[100];
    int letras[26] = {0};

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    for (int i = 0; i < strlen(palabra); i++) {
        char letra = palabra[i];
        if (letra >= 'a' && letra <= 'z') {
            letras[letra - 'a']++;
        }
        else if (letra >= 'A' && letra <= 'Z') {
            letras[letra - 'A']++;
            }
    }

    printf("Ocurrencias de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        if (letras[i] > 0) {
            printf("%c: %d\n", 'a' + i, letras[i]);
        }
    }

    return 0;
}
