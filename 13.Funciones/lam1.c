#include <stdio.h>
#include <string.h>

float promedio(float a, float b);
int main() {
    float a = 10, b=10,prom;
    prom = promedio(a,b);
    printf("El Promedio es: %2.1f\n", prom);

    return 0;
}
float promedio(float a, float b){
    float prom;
    a = a+3;
    b = b+3;
    prom = (a+b)/2;
}
