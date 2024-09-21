//Funcion con valor de retorno
#include <stdio.h>

//Declaracion de la funcion
int sumar(int a, int b) {
    return a  + b;
}

int main() {
    int resultado;
    //Llamada a lafuncion y almacenamiento del valor de retorno
    resultado = sumar(5, 3);
    printf("La suma es: %d\n", resultado);
    return 0;
}