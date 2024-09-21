//Punteros
#include <stdio.h>

int main() {
    int valor = 10;
    int *ptr = &valor;

    printf("Valor original: %d\n", valor);
    *ptr = 20;
    printf("Nuevo valos: %d\n", valor);

    return 0;
}