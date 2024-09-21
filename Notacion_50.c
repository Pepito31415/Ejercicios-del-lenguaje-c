//Paso por referencia
#include <stdio.h>

void incrementar(int *x);

int main() {
    int a = 5;
    incrementar(&a);
    printf("El valor de a es: %d\n", a); //imprimira 6
    return 0;
}

void incrementar(int *x){
    *x = *x + 1;
}