#include <stdio.h>

double numMayor(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
int main() {
    double numero1, numero2;

    printf("Ingrese el primer número: ");
    scanf("%lf", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%lf", &numero2);

    double resultado = numMayor(numero1, numero2);
    printf("El máximo de %lf y %lf es: %lf\n", numero1, numero2, resultado);

    return 0;
}
