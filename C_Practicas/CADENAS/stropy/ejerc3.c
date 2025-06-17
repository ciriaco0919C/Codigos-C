#include <stdio.h>
#include <string.h>

int main (){

    char palabra1[100];
    char palabra2[100];


    printf("Ingresa la Primer palabra:");
    scanf("%s",palabra1);
    printf("Ingresa la Segunda palabra:");
    scanf("%s",palabra2);

    int longitud = strlen(palabra1);

    for (int i = 0; i < longitud; i++)
    {
        strcat(palabra1,palabra2);
    }
    
    printf("Palabra Modificada: %s", palabra1);

    return 0;
}