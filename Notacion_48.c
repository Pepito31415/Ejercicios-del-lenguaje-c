//Llamada de una funcion
#include <stdio.h>

//Declaracion de una funcion
void saludar(char nombre[]);

int main() {
    //llamada a la la funcion
    saludar("Juan");
    return 0;
}

//Definicion de la funcion
void saludar(char nombre[]) {
    printf("Hola, %s!\n", nombre);
}