#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     clock_t inicio, fin;
    double tiempo_transcurrido;
    inicio = clock();
    int x,i,n;
    char *buffer;

    printf("Teclea la longuitud de la cadena: ");
    scanf("%d", &x);

    buffer=(char*) malloc((i+1)*sizeof(char));
    if (buffer==NULL) exit (1);

    for (n=0; n<x; n++){
    printf("Teclea el elemento %d : \n", n+1);
    scanf("%d", &i);
    buffer[n]=i;
    }
    buffer[i]='\0';
    
    for (n=0; n<x; n++){
    printf("Arreglo [%d]: %d\n", n, buffer[n]);
    
    }
    free(buffer);
      fin = clock();

    tiempo_transcurrido = ((double)(fin - inicio)) / CLOCKS_PER_SEC; 
    printf("\nEl tiempo de ejecución fue de %f segundos.\n", tiempo_transcurrido);
    printf("Tiempo de ejecución en ciclos de reloj: %f\n", (double) (fin- inicio));
}
    
   