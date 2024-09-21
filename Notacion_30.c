#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Introduce el numero de elementos: ");
    scanf("%d", &n);

    //Asignar memoria usuario malloc
    ptr = (int*)malloc(n * sizeof(int));

    // Verficar si la memoria fue asignada correctamente
    if (ptr == NULL) {
        printf("Memoria no asignada.\n");
        exist(0);
    } else {
        printf("Memoria asignada con exito usando malloc.\n");

        //Inicializar el array 
        for (i = 0; i < n; ++i){
            ptr[i] = i + 1;
        }
        //Imprimir el array
        printf("Los elementos del array son: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
    // Liberar la memoria asignada
    free(ptr);

    return 0;
}