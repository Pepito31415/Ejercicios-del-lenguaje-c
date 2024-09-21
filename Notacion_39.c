//Ejemplo del bucle while
#include <stdio.h>

int main() {
    int numero, suma =0;

    printf("Introduze un numero (negativo para terminar): ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        suma += numero;
        printf("Introduce otro numero (negativo para terminar): ");
        scanf("%d", &numero);
    }
    printf("La suma es: %d\n", suma);
    return 0;
    
}