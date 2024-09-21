//Calculadora simple...
#include <stdio.h>

int main() {
    char operador;
    double num1, num2;

    printf("Introduce un operador (+, -, *, /): ");
    scanf("%c", &operador);
    printf("Introduce dos numeros: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1*num2);
            break;
        case '/':
            if (num2!= 0){
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1/num2);
                break;
            }else{
                printf("Error: Division por cero. \n");
            break;
            }
        default:
            printf("Operador no valido.\n");

    }

    return 0;
}