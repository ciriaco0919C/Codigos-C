#include <stdio.h>

int main() {
    // Crear un arreglo de 20 posiciones
    int arreglo[20];
    int i;

    // Asignar valores a cada elemento del arreglo
    for (i = 0; i < 20; i++) {
        arreglo[i] = i + 1; // Asignar valores del 1 al 20
    }

    // Calcular el promedio de todos los elementos
    int suma = 0;
    for (i = 0; i < 20; i++) {
        suma += arreglo[i];
    }
    float promedio = (float)suma / 20;

    // Calcular la multiplicación de todos los elementos
    int multiplicacion = 1;
    for (i = 0; i < 20; i++) {
        multiplicacion *= arreglo[i];
    }

    // Mostrar resultados
    printf("El promedio de los elementos es: %.2f\n", promedio);
    printf("La multiplicación de los elementos es: %d\n", multiplicacion);

    return 0;
}