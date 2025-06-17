#include <stdio.h>

int main(void) {
    
    int tamaño;
    
    printf("Teclea la longitud del arreglo: ");
    scanf("%d",&tamaño);

    int *arreglo= (int*) malloc(tamaño*sizeof(int));
    printf("ingresa los datos del arreglo: \n");
    for (int i  = 0; i < tamaño; i++){
        printf("%d°- ", i+1);
        scanf("%d", arreglo +i);
    }
    printf("\nImpresion del arreglo\n");
    for (int i = 0; i < tamaño; i++)
    {
        printf("%d", *(arreglo+i));
    }
    printf("\n"); 
        
        free(arreglo);
        system("Pause");
        return 0;
    
}  