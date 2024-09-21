//Calcular el factorial de un numero...
#include <stdio.h>

int main() {
    int num, factorial = 1, i = 1;
    printf("Introduce un numero: ");
    scanf("%d", &num);

    do{
        factorial *= i;
        i++;
    }while (i <= num);
    
    printf("El factorial de %d es %d\n", num, factorial);
    return 0;
    
}