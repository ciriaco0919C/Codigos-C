#include <stdio.h>

int main(){
    
    int numero = 1;
    int triple;
    
    while (numero <=1000)
    {
    if( numero % 3 == 0)
        printf("%d\n",numero);
        ++numero;
    }
    system("Pause");
    return 0;
}//fin main