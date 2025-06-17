#include <stdio.h>

int main (){
    int i;
    printf("A \t A+2 \t A+4 \t A+6 \t");
    for (i = 3 ; i <=12; i+=3)
    {
    printf("\n %d \t %d \t %d \t %d \n" , i, i+2, i+4, i+6);
    
    }
    
}