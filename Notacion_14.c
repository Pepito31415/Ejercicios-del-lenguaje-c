//variables globales y locales....
#include <stdio.h>

//variable global
int global = 10;

void funcion_ejemplo() {
    //Vareiable local
    int local_Var = 5;
    printf("Valor de la variable local: %d\n", local_Var);
    printf("Valor de la valiabl global: %d\n", global);
}

int main() {
    printf("Valor inicial de la variable global: %d\n", global);
    funcion_ejemplo();

    //Modificando la variable global
    global = 20;
    printf("Valor de la variable global actualizada: %d\n", global);

    return 0;
}