//calculadora basica
#include <stdio.h>

int main() {
    char operacion;
    double num1, num2, resultado;

    printf("Introduce dos numeros: ");
    scanf("%lf %lf", &num1, &num2);
    printf("introduce una operacion (+, -, *, /): ");
    scanf(" %c", &operacion);

    if (operacion == '+') {
        resultado = num1 + num2;
    }else if (operacion == '-') {
        resultado = num1 - num2;
    }else if (operacion == '*') {
        resultado = num1 * num2;
    }else if (operacion == '/') {
        if (num2 != 0){
            resultado = num1 / num2;
        }else{
            printf("Error: Division por cer.\n");
            return 1;
        }
    }else{
        printf("Operacion no valida\n");
        return 1;
    }

    printf("El resultado es: %.2lf\n", resultado);
    return 0;
}