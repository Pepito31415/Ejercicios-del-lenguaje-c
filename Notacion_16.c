//demostracion de los punteros
#include <stdio.h>

int main() {
    int valor = 10;
    int *ptr = &valor;

    printf("Valor original: %d\n", valor);
    printf("direccion de memoria de valor: %p\n", (void*)&valor);
    printf("direccion  almacenada en ptr: %p\n", (void*)ptr);
    printf("Valor apuntado por ptr: %d\n", *ptr);

    *ptr = 20;
    printf("Nuevo valor de valor: %d\n", valor);

    return 0;
}