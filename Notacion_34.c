#include <stdio.h>

int suma(int a, int b){
    return a + b;
}

int main() {
    int resultado = 0;
    for (int i =0; i< 1000000; i++) {
        resultado += suma(i, i+1);
    }
    printf("Resultado: %d\n", resultado);
    return 0;
}