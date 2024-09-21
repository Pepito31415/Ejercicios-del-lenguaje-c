//Aritmetica en estructuras.
#include <stdio.h>

struct Punto {
    int x;
    int y;
};

int main() {
    struct Punto p1 = {10, 20};
    struct Punto *ptr = &p1;

    // Acceso usando el operador de punto
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);

    // Acceso usando el operador de flecha
    printf("ptr -> x = %d, ptr -> y = %d\n", ptr->x, ptr->y);

    return 0;
}