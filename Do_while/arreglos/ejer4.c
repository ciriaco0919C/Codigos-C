#include<stdio.h>
int main(){
    
    int arreglo[]={3,5,6,8,4,7,8,5,3,1};
    int arregloB[]={3,4,6,8,9,1,2,3,0,9};

    printf("El resultado Primer operacion es: %d\n ", +arreglo[3]%(arregloB[2]/2));
    printf("El resultado Segunda operacion es: %d\n ", +arregloB[arreglo[1]]-arreglo[9]);
    printf("El resultado Tercera operacion es: %d\n ", +arreglo[0]+arreglo[1+2]);
    printf("El resultado Cuarta operacion es: %d\n ", +arreglo[5]+(arregloB[5]));
    printf("El resultado Cuarta operacion es: %d\n ", +arreglo[3]/(arregloB[2]/2));


}
    