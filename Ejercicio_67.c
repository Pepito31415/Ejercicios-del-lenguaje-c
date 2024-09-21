//Funcion con parametros y con valor de retorno.
#include <stdio.h>

//Declaracion de a funcion
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado;
    int num1 = 15;
    int num2 = 25;
    //Llamada a la funcion y almacenamiento del valor de retorno
    resultado = sumar(num1, num2);
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
    return 0;
}