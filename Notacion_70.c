//Paso por referencia
#include <stdio.h>

void intercambiar(int *a, int *b);

int main() {
    int x = 5, y = 10;
    printf("Antes del ntercambio: x = %d, y = %d\n", x, y);
    intercambiar(&x, &y);
    printf("Despues del intercambio: x = %d, y = %d\n", x, y);
    return 0;
}

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}