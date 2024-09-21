//suma de numeros de dos numeros.
#include <stdio.h>

int main() {
    int num1, num2, suma;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("La suma de %d y %d es %d\n", num1, num2, suma);
    return 0;
}