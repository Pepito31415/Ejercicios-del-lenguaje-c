//Intercanbio de valores
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Antes del intercanbio: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Despues del intercambio: x = %d, y = %d\n", x, y);

    return 0;
}