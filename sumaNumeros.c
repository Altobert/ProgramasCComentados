#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void){
    int num = 0;
    //int pares =0;    
    int naturales =0;
    int fact= 0;
    printf("Numero: ");
    scanf("%d", &num);    
    naturales = sumar(num);
    printf("%d\n", naturales);    
    //pares = sumarParesNaturales(num);
    //printf("%d\n", pares);    
    fact = factorial(num);
    printf("%d\n", fact);    

}