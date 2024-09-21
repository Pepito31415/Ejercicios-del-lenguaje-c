//Paso por valor
#include <stdio.h>

void incrementar(int x);

int main() {
    int a = 5;
    printf("El valor de a es: %d\n", a); //imprimira 5
    return 0;
}

void incrementar(int x) {
    x = x + 1;
}