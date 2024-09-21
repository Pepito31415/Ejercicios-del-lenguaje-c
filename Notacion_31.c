#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5, i;

    // Asignar memoria inicial
    ptr = (int*)malloc(n * sizeof(int));

    //Inicializar el array
    for (i = 0; i < n; ++i){
        ptr[i] = i+ 1;
    }
    //Reasignar memoria
    n = 10;
    ptr = (int*)realloc(ptr, n * sizeof(int));

    //Inicializar el nuevo espacio de memoria
    for(i = 5; i < n; ++i) {
        ptr[i] = i + 1;
    }

    //Imprimir el array
    printf("Los elementos del array son: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
    }

    //Liberar la memoria asignada
    free(ptr);

    return 0;
}
