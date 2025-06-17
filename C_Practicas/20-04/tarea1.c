#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main (){

        double lado1;
        double lado2;
        double lado3;

        double area;
        double p;

        printf("Digita el primer lado: ");
        scanf("%lf", &lado1);
        printf("Digita el segundo lado: ");
        scanf("%lf", &lado2);
        printf("Digita el tercer lado: ");
        scanf("%lf", &lado3);

        p = ((lado1 + lado2 + lado3)/2);

        area = sqrt(p *(p - lado1)*(p - lado2)*(p - lado3));

        printf("El valor de P es igual : %lf", p);
        printf("\nEl area de tu triangulo es: %lf", area);

    }

