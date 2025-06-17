#include <stdio.h>
#include <string.h>

int main (){
    int len;
    char palabra1[20];
    char palabra2[20];
    char cambio[20];

    printf("Ingresa la Primer palabra:");
    scanf("%s",palabra1);
    printf("Ingresa la Segunda palabra:");
    scanf("%s",palabra2);

    printf("---ANTES---\n");
    printf("Primer palabra: %s\n", palabra1);
    printf("Segunda palabra: %s\n", palabra2);
    
    strcpy(cambio, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, cambio);

    printf("---DESPUES---\n");
    printf("Primer palabra: %s\n", palabra1);
    printf("Segunda palabra: %s\n", palabra2);
    return 0;
}