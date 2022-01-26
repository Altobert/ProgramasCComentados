#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void){
    int num = 0;
    int salida =0;
    printf("Suma de los n primeros numeros: ");
    scanf("%d", &num);    
    salida = sumar(num);
    printf("%d\n", salida);    
}