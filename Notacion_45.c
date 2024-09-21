//Funcion con parametros
#include <stdio.h>

//Declaracion de la funcion
void imprimir_suma(int a, int b){
    int suma = a + b;
    printf("La suma de %d y %d es: %d\n", a, b, suma);
}

int main() {
    int num1 = 5;
    int num2 = 3;
    //Llamada a la funcion con parametros
    imprimir_suma(num1, num2);
    return 0;
}