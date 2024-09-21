//Array Unidimencional
#include <stdio.h>

int main() {
    int numeros[10];

    // Inicializacion del array
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    //Impresion del los valores del array
    for(int i = 0; i < 10; i++){
        printf("Elemento en el indice %d: %d\n", i, numeros[i]);
    }

    return 0;
}