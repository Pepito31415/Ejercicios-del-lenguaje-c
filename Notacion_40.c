//Ejemplo del bucle do-while
#include <stdio.h>

int main() {
    int numero, suma = 0;

    do {
        printf("Introduce un numero (negativo para terminar): ");
        scanf("%d", &numero);
        if (numero >= 0){
            suma += numero;
        }
    }while (numero >= 0);
        printf("La suma es: %d\n", suma);
        return 0;
}    
