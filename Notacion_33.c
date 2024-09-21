#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    printf("Introduce el numero de elementos: ");
    scanf("%d", &n);

    //Asignar memoria usando malloc
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memoria no asignada.\n");
        exit(0);
    }
    //Inicializar el array
    for (i = 0; i < n; ++i) {
        ptr[i] = i +1;
    }
    //Imprimir el array
    printf("Los elementos del array son: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
    }
//Reagsignar memoria
n = 2 * n;
ptr = (int *)realloc(ptr, n * sizeof(int));
if (ptr == NULL) {
    printf("Memoria no reasignada.\n");
    exit(0);
}
//Inicializar el nuevo espacio de memoria
for (i = n / 2; i < n; ++i) {
    ptr[i] = i + 1;
}
// Imprimir la memoria asignada
free(ptr);

return 0;
}