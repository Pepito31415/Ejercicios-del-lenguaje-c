//Contador de llamadas a una funcion
#include <stdio.h>

void contar_llamadas() {
    // Variable estatica local
    static int contador = 0;
    contador++;
    printf("La funcion ha sido llamada %d veces\n", contador);
}

int main() {
    contar_llamadas();
    contar_llamadas();
    contar_llamadas();
    return 0;
}