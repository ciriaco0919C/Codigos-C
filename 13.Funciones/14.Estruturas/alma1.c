#include <stdio.h>
#include <stdlib.h>

struct CD
{
    char titulo[100];
    char artista[50];
};
int main (void){
    struct CD cd1;
    printf("Ingresa un titulo: \n");
    scanf("%s\n",cd1.titulo);
    return 0;
}
