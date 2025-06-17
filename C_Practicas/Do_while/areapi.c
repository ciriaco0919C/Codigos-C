#include <stdio.h>

#define PI 3.14159 // Definimos el valor de pi

int main() {
    // Definimos el diámetro del círculo
    float diametro = 10.0;
    
    // Calculamos el radio del círculo
    float radio = diametro / 2.0;
    
    // Calculamos el área del círculo usando la fórmula
    float area = PI * radio * radio;
    
    // Imprimimos el resultado
    printf("El área del círculo con un diámetro de %.1f metros es: %.2f metros cuadrados.\n", diametro, area);
    
    return 0;
}
