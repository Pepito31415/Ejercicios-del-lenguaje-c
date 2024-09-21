#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0.0;

    printf("Introduce numeros enteros (un numero negativo para terminar): \n");

    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No se ingresaron los numeros.\n");
    }else{
        printf("El promedio es %.2f\n", sum / count);
    }
    return 0;
}