//operaciones aritmeticas basicas

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    printf("Suma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Suma: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Suma: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Suma: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Suma: %d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}