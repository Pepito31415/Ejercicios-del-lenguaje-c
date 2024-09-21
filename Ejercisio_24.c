//Intercambio de valores
#include <stdio.h>

int main() {
    int a, b;
    printf("Introduce el valor de a: ");
    scanf("%d", &a);
    printf("Introduce el valor de b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Despues del intercambio, a = %d y b = %d\n", a, b);
    return 0;
}