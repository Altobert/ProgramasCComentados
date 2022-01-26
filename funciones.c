
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*int sumarParesNaturales(int num){

    if(num == 2){
        return 2;
    }else{             
        //num + es la operacion que va a ir esperando hasta que se cumpla el caso base        
        return num + sumarParesNaturales((num*2)-1);                
    }
}*/

//Es mejor que sea un ling el numero
int factorial(int num){
    if(num == 0){
        return 1;
    }else{
        // num * es la operacion que va quedando a la espera mientras se soluciona el otro        
        return num * factorial(num-1);
    }
}

int sumar(int num){

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
4 + (3)
n = 3
3 + (2)
n = 2
2 + (1)
n = 1   
1 + 0 
n = 0
*/


