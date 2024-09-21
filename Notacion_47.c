//Ejemplo de alcance estatico.
#include <stdio.h>

int global = 10; //Variable global

void funcion() {
    int local = 5; //Variable local
    static int estatica = 0; //Variable estatica local
    estatica++;
    printf("Local: %d, estatica: %d, Global: %d\n", local, estatica, global);
}

int main() {
    funcion();
    funcion();
    return 0;
}