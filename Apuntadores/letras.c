#include <stdio.h>
#include <stdlib.h>

int main(){
    int lon;

    printf("Ingresa la longitud del arreglo: ");
    scanf("%d", &lon);

    char *buffer = (char*) malloc(lon * sizeof(char));

    if(buffer == NULL){
        printf("Error \n");
        return 1;
    }

    printf("Ingresa las letras de tu arreglo:\n");
    for (int i = 0; i < lon; i++){
        char letra;
        printf("Letra %d: ", i + 1);
        scanf(" %c", &letra);
        buffer[i] = letra;
    }

    printf("Arreglo Inverso: \n");
    for (int i = lon - 1; i >= 0; i--){
        printf("%c", buffer[i]);
    }
    printf("\n");
    
    free(buffer);

    return 0;
}
