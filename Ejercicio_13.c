//Modificar una variable global desde una funcion.
#include <stdio.h>

//variable global
int contador = 0;

void incrementar_contador() {
    contador++;
}

int main(){
    printf("Contador inicial. %d\n", contador);
    incrementar_contador();
    incrementar_contador();
    printf("Contador despuesde incrementar: %d\n", contador);

    return 0;
}