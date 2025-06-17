#include <stdio.h>

int main(){
    
    int numero = 1;

    while (numero <=1000)
    {
    if( numero % 2 == 0 && numero % 7 == 0)
        printf("%d\n",numero);
        numero++;
    }
   
  
    return 0;
}//fin main