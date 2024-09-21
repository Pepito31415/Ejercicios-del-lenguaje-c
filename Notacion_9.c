#include <stdio.h>

void incrementar(){
    static int contador = 0; //Variable estatica
    contador++;
    printf("Contador: %d\n", contador);
}

int main() {
    incrementar(); //Imprime: contador: 1
    incrementar(); //Imprime: contador: 2
    incrementar(); //Imprime: contador: 3

    return 0;
}