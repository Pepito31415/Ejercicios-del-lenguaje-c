//Calculadora simple
#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("introduce un operador (+, -, *, /): ");
    scanf("%c", &operador);
    printf("Introduce 2 numeros: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador)
    {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultado = num1 / num2;
            else{
                printf("Error: Division por cero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador no valido.\n");
            return 1;
    }

    printf("resultado: %.2lf\n", resultado);
    return 0;
}