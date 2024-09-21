//Maximo comun Divisor
#include <stdio.h>

int mcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 56, num2 = 98;
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));
    return 0;
}