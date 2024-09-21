//Procesadores...
#include <stdio.h>

#define AREA_RECTANGULO(x, y) (x*y)

int main() {
    int ancho = 5, alto = 4;
    printf("El area de un rectangulo %d x %d = %d.\n",
    ancho, alto, AREA_RECTANGULO(ancho, alto));

    return 0;
}