#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];
    int res;

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    res = strcmp(palabra1, palabra2);

    if (res == 0) {
        printf("Ambas palabras son iguales\n");
    } else if (res < 0) {
        printf("%s es menor que %s\n", palabra1, palabra2);
        printf("Resultado: %d\n", res);
    } else {
        printf("%s es mayor que %s\n", palabra1, palabra2);
        printf("Resultado: %d\n", res);
    }

    return 0;
}
