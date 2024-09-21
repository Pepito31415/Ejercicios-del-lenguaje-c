//Contador de llamadas de funcion
#include <stdio.h>

void contar_llamadas() {
    static int contador = 0; // Variable estatica local
    contador++;
    printf("La funcion ha sido llamada %d veces\n", contador);
}

int main(){
    contar_llamadas();
    contar_llamadas();
    contar_llamadas();
    return 0;
}