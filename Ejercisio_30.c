#include <stdio.h>

void sumar(int numero) {
    static int suma = 0; // Variable estática local
    suma += numero;
    printf("Suma acumulativa: %d\n", suma);
}

int main() {
    sumar(5);
    sumar(10);
    sumar(3);
    return 0;
}