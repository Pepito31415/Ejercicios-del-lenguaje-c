#include <stdio.h>

int main() {
    int a = 3;
    int b = 8;
    int temp;

    temp = a;
    a = b;
    b =  temp;

    printf("Despues del intercambio, a = %d y b = %d\n", a, b);
    return 0;
}