//Ejercicio 1: calculadora basica
#include <stdio.h>

int main(){
    char operador;
    double num1, num2, resultado;

    printf("Introduce un operador (+, -, *, /): ");
    scanf("%c", &operador);
    printf("Introduce dos numeros: ");
    scanf("%1f", &num1);
    scanf("%1f", &num2);

    switch (operador){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '/':
            if (num2 != 0){
                resultado = num1 / num2;
                break;
            }else{
                printf("Error: Division por cero.\n");
                return 1;
            }
            break;
        default:
            printf("Operador no valido.\n");
            return 1;
    }
    printf("Resultado: %.2lf\n", resultado);
    return 0;
}