#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;
    
    printf("Escribe el tamaño de tu arreglo: ");
    scanf("%d",&tam);

    int *array = (int *)malloc( tam* sizeof(int));

    printf("Ingrese %d elementos del array:\n",tam);
    for(int i = 0; i < tam; i++)
    {
        printf("Elemento%d: ", i+1);
        scanf("%d",&(*(array+i)));

    }
    printf("Los elementos del arreglo son: \n");
    for (int i = 0; i < tam; i++)
    {
        printf("\n");
        printf("%d",*(array+i));
    }
    free(array);
    return 0;

    
    
    
}