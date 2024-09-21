//calculadora...
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    printf("_Introduce un numero: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("La suma de los primeros %d numeros naturales es %d\n", n, sum);
    return 0;
}