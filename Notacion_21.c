//Punteros.
#include <stdio.h>

int main() {
    int var = 10; //declaracion de una variable entera
    int *p; //Declaracion de un puntero a entero
    
    p = &var; //asignacion de la direccion de var al puntero p

    printf("El valor de var: %d\n", var);
    printf("La direccion de var: %p\n", (void*)&var);
    printf("El valor del púntero p: %p\n", (void*)p);
    printf("El valor al que apunta p: %d\n", *p);

    return 0;
}