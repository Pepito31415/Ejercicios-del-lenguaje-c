//Numero par o impar.
#include <stdio.h>

int main() {
    int num;
    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("El numero es par.\n");
    }else{
        printf("El numero es impar.\n");
    }
    return 0;
}