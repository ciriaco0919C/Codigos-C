#include <stdio.h>

// Función para calcular las diferencias divididas
float diferencias_divididas(float x[], float y[], int n, int i, int j) {
    if (j == 0) {
        return y[i];
    } else {
        return (diferencias_divididas(x, y, n, i + 1, j - 1) - diferencias_divididas(x, y, n, i, j - 1)) / (x[i + j] - x[i]);
    }
}

// Función para calcular el término de interpolación
float termino_interpolacion(float x[], float y[], int n, float xi) {
    float resultado = 0;
    for (int i = 0; i < n; i++) {
        float termino = diferencias_divididas(x, y, n, 0, i);
        for (int j = 0; j < i; j++) {
            termino *= (xi - x[j]);
        }
        resultado += termino;
    }
    return resultado;
}

int main() {
    int n;
    printf("Ingrese el número de puntos para la interpolación: ");
    scanf("%d", &n);

    float x[n], y[n];
    printf("Ingrese los valores de x:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    printf("Ingrese los valores de y:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }

    float xi;
    printf("Ingrese el valor de xi para interpolar: ");
    scanf("%f", &xi);

    // Calcular el valor interpolado
    float resultado = termino_interpolacion(x, y, n, xi);
    printf("El valor interpolado en x = %.2f es: %.2f\n", xi, resultado);

    return 0;
}
