//Suma de dos numeros
#include <stdio.h>

//variable global
int num1 = 10;

int main() {
    // Variable local
    int num2 = 20;
    int suma = num1 + num2;
    printf("La suma de num1 y num2 es: %d\n", suma);
    
    return 0;
}