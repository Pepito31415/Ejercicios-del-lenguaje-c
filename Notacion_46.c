//Variables Locales y Globales
#include <stdio.h>

//Declaracion de una variable global
int variable_global = 100;

void funcion_ejemplo() {
    //declaracion de una variable local
    int variable_local = 10;

    printf("Dentro de la funcion\n");
    printf("Variable local: %d\n", variable_local);
    printf("Variable global: %d\n", variable_global);
}

int main() {
    //Llamada a la funcion
    funcion_ejemplo();

    printf("Fuera de la funcion: \n");
    //print("Variable global: %d\n", variable_local);
    //Esto causaria un error por que variable localno es accesible aqui
    printf("Variable global: %d\n", variable_global);

    return 0;
}