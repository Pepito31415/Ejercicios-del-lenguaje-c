//Suma de numeros pares
#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 2; i <= 1000; i += 2) {
        // Incrementa de 2 en 2
        suma += i;
    }
    printf("La suma de los numeros pares entre 1 y 1000 es: %d\n", suma);
    return 0;
}