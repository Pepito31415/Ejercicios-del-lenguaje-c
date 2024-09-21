//Evaluacion de expreciones logicas
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    printf("Introduce el tercer numero: ");
    scanf("%d", &num3);

    if (num1 > 0 && num2 > 0 && num3 > 0) {
        printf("Todos los numeros son positivos.\n");
    }else if (num1 < 0 || num2 < 0 || num3 < 0) {
        printf("Al menos uno de los numeros en negativo.\n");
    }else if (num1 == 0 && num2 == 0 && num3 == 0) {
        printf("Al menos uno de los numeros en negativo.\n");
    }else{
        printf("Hay una combinacion de positivos, negativos y/o ceros.\n");
    }
    return 0;
}