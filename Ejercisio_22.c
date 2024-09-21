//Operaciones combinadas.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    int resultado = (num1 + num2) * (num1 - num2);
    printf("Resultado de (num1 + num2)* (num1 - num2): %d\n", resultado);

    resultado = (num1 * num2) / (num1 + num2);
    printf("Resultado de (num1 * num2) / (num1 + num2): %d\n", resultado);

    resultado = (num1 % num2) + (num1 / num2);
    printf("Resultado de (num1 %% num2) + (num1 / num2): %d\n", resultado);


    return 0;
}