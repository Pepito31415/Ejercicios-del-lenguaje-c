//Contador de llamadas a una funcion.

#include <stdio.h>

void contarLlamadas() {
    static int contador = 0; // Variable estática local
    contador++;
    printf("La función ha sido llamada %d veces\n", contador);
}

int main() {
    contarLlamadas();
    contarLlamadas();
    contarLlamadas();
    return 0;
}
