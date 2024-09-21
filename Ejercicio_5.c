#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &num);

    if (num < 0){
        printf("El factorial no esta definido para numeros negativos.\n");
    }else{
        for (i = 1; i <= num; ++i){
            factorial *= i;
        }
        printf("El factorial de %d es %llu\n", num, factorial);
    }
    return 0;
}