#include <stdio.h>
#include <string.h>

int main (){
    char palabra[100];
    int longi;

    printf("Ingresa una palabra ");
    scanf("%s",palabra);

    longi = strlen(palabra);

    for (int i = 0; i < longi; i++){
        for (int j = 0; j < longi; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    
    return 0;
}