//Comparacion de Numeros

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d es mayor que %d\n", num1, num2);
    }else if (num1 < num2) {
        printf("%d es menor que %d\n", num1, num2);
    }else{
        printf("%d es igual a %d\n", num1, num2);
    }
    return 0;
}