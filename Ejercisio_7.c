#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int inicio, fin;

    printf("introduce el rango (dos neumeros enteros):");
    scanf("%d %d", &inicio, &fin);

    printf("Numeros primos entre %d y %d", inicio, fin);
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)){
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}