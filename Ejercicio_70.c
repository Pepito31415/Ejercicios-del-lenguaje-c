//Funcion con multiples parametros
#include <stdio.h>

float promedio(int a, int b, int c);

int main() {
    float resultado = promedio(4, 8, 6);
    printf("El promedio es: %.2f\n", resultado);
    return 0;
}

float promedio(int a, int b, int c) {
    return (a + b + c) / 3.0;
}