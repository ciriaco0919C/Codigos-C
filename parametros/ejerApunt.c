#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     clock_t inicio, fin;
    double tiempo_transcurrido;
    inicio = clock();
    int x, i, n;

    printf("Teclea la longitud de la cadena: ");
    scanf("%d", &x);

    char buffer[x]; // Declaración del arreglo buffer de tamaño x

    for (n = 0; n < x; n++) {
        printf("Teclea el elemento %d : \n", n + 1);
        scanf("%d", &i);
        buffer[n] = i;
    }
    buffer[x] = '\0'; // Añade el carácter nulo al final del arreglo

    for (n = 0; n < x; n++) {
        printf("Arreglo [%d]: %d\n", n, buffer[n]);
    }
    fin = clock();

    tiempo_transcurrido = ((double)(fin - inicio)) / CLOCKS_PER_SEC; 
    printf("\nEl tiempo de ejecución fue de %f segundos.\n", tiempo_transcurrido);
    printf("Tiempo de ejecución en ciclos de reloj: %f\n", (double) (fin- inicio));

    return 0;
}