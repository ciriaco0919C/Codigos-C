#include <stdio.h>
#include <string.h>
void inverso (char palabra [100], char resultado[100]);

int main() {
    char palabra [100];
    char resultado[100];

    printf("Ingrese la primer palabra: ");
    scanf("%s", &palabra);
    inverso(palabra, resultado);
    printf("LA palabra invertida es: %s\n", resultado);
    return 0;
}
void inverso(char palabra[100], char resultado[100]){

    int len = strlen(palabra);
    for (int i = len-1; i >=0; i--)
    {
        resultado[i]=palabra[len-1-i];
    }
    
}
