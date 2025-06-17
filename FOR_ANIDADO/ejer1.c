#include <stdio.h>

int main (){
    int n;
    int i;
    int j;
    printf("Escribe un numero: ");
    scanf("%d",&n);

    printf("Asteriscos Ascendente \n");
    for (i = 1; i <=n; i++){
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("Asteriscos Descendente \n");
    for (i = n; i >=1; i--){
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    system("Pause");
    return 0;
    
}