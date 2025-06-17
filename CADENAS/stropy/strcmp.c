#include <stdio.h>
#include <string.h>

int main (){
    int res;
    char str1[]="para";
    char str2[]="brisas";
    
    res = strcmp(str1, str2);
    printf("Resultado: %d\n", res);
    return 0;
}