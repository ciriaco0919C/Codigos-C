#include <stdio.h>

// Declaración de la función factorial
int factorial(int n);

int main() {
    int n;
    printf("Ingresa un número ");
    scanf("%d", &n);

    // Verificamos si el número ingresado es negativo
    if (n < 0) {
        printf("No se permiten valores negativos :v.\n");
    } else {
        // Llamamos a la función factorial y mostramos el resultado
        printf("El factorial de %d es: %d\n", n, factorial(n));
    }

    return 0;
}

// Definición de la función factorial
int factorial(int n) {
    // Caso base: factorial de 0 es 1
    if (n == 0) {
        return 1;
    }
    // Caso recursivo: n * factorial(n - 1)
    return n * factorial(n - 1);
}
