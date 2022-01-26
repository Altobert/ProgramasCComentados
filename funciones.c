
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int sumar(int num){
    //printf("El valor es: %d\n",num);    
    if(num == 0){
        return 0;
    }else{             
        //num + es la operacion que va a ir esperando hasta que se cumpla el caso base
        return num + sumar(num-1);
    }
}
/*
n = 10
10 + (9)
n = 9
9 + (8)
n = 8
8 + (7)
n = 7
7 + (6)
n = 6
6+ (5)
n = 5
5 + (4)
n = 4
*/


