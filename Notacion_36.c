//Estructura de control secuencial-----
#include <stdio.h>

int main() {
    int a, b, sum;
    //solicitar el primer numero
    printf("Introduce el primer numero: ");
    scanf("%d", &a);

    //Solicitar el segundo numero
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);

    //sumar los dos numeros
    sum = a + b;

    //Mostrar el resultado
    printf("La suma es: %d\n", sum);

    return 0;
}