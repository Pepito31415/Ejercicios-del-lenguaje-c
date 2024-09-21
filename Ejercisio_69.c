//Paso por valor
#include <stdio.h>

int sumar(int a, int b);

int main() {
    int resultado = sumar(3, 4);
    printf("La suma es: %d\n", resultado);
    return 0;
}

int sumar(int a, int b){
    return a + b;
}