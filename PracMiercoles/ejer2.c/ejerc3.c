#include <stdio.h>

int main(){
    
    int numero = 1;

    
    while (numero <=100)
    {
    if( numero % 7 != 0)
        printf("%d\n",numero);
        numero++;
    }
    return 0;
}//fin main