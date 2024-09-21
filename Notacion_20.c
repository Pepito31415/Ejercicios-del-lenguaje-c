#include <stdio.h>

int main() {
    const int MAX_INTENTOS = 3; //Constante definida con const
    int intentos = 0;
    int exito = 0;

    while (intentos < MAX_INTENTOS && !exito)
    {
        //Simlamos el inttento de una operacion
        printf("Intento %d\n", intentos + 1);
        intentos++;
        //Aqui podrias agregar logica para determinar si la operacion tuvo exito
    }
    if (exito){
        printf("Operacion exitosa\n");
    }else{
        printf("Se alcanzo el numero maximo de intentos\n");
    }
    return 0;
}