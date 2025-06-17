#include <stdio.h>
#include <string.h>

struct cd{
    char titulo [100];
    char artista[50];
};

int main(void) {
    
    struct cd cd1;

    printf("Ingresa un titulo \n");
    scanf("%s", cd1.titulo);
    printf("%s\n", cd1.titulo);

    return 0;
}