//imprecion de una tabala para crear bucle for:
#include <stdio.h>

int main() {
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);

    for ( int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}