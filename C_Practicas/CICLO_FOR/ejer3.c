#include <stdio.h>

int main (){
    int numero, suma=0;

    printf("Ingresa un numero ");
    scanf("%d",&numero);

    for (int i = 1 ; i <=numero; i++)
    {
        printf("%d\n", i );
        suma+= i;
        
    }
    printf("La suma de los numeros desde 1 hasta %d es: %d\n", numero, suma);
        return 0;
    
}