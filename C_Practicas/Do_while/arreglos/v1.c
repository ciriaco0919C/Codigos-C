#include <stdio.h>

int main(){
    
    int vector[10];
    int pos = 0;
    
    while (pos < 10)
    {
        vector[pos]= 10;
        pos++;
    }

    pos=0;
    printf("Posiciom del arreglo:\n");
    while (pos < 10)
    {
        printf("Posicion %d: %d\n", pos, vector[pos]);
        pos++;
    }
    
    system("Pause");
    return 0;
}//fin main