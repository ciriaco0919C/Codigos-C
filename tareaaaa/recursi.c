#include <stdio.h>
#include <string.h>

int main(void) {
    int x, y;
    int max;
    
    x = 2;
    y = 3;

    max = potencia(x,y);

    printf("La potencia es %d\n", max);
system("pause");
return 0;

}
int potencia (int a, int b){
    if (b < 1){
        return 1;
        return a * potencia (a,b-1);
    }
}