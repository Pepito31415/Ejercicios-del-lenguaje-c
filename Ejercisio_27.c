//Generador de Numeros secuenciales
#include <stdio.h>

int generar_numero(){
    static int numero = 0;
    return numero++;
}

int main() {
    printf("numero: %d\n", generar_numero());
    printf("Numero: %d\n", generar_numero());
    printf("Numero: %d\n", generar_numero());
    return 0;
}