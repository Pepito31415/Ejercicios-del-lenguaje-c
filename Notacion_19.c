//VAriables estaticas y constantes.
#include <stdio.h>

#define PI 3.14159 //Constante definida con #define

void incrementar_contador() {
    static int contador = 0; // Variable estatica local
    contador++;
    printf("Contador: %d\n", contador);
}

int main() {
    const int MAX_INTENTOS = 5; //Constante definida con const

    for (int i = 0; i < MAX_INTENTOS; i++) {
        incrementar_contador();
    }

    printf("Valor de PI: %f\n", PI);
    return 0;
}