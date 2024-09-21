//Operadores aritmeticos y operadores logicos.
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    int division = a / b;
    int modulo = a % b;

    printf("Suma: %d\n", suma);
    printf("resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);
    printf("Division: %d\n", division);
    printf("Modulo: %d\n", modulo);

    int resultado_logico = (a > b) && (b < 10);
    printf("Resultado logico: %d\n", resultado_logico);

    return 0;
}