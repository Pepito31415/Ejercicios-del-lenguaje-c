//Funcion con parametros y sin valor de retorno
#include <stdio.h>

//Declaracio de la funcion
void imprimir_numeros(int a, int b) {
    printf("El primer numeros es: %d\n", a);
    printf("El segundo numero es: %d\n", b);
}

int main() {
    int num1 = 10;
    int num2 = 20;
    // Llamada a la funcion con parametros
    imprimir_numeros(num1, num2);
    return 0;
}