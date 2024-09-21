#include <stdio.h>

int edad = 25;//variable global

int main() {
    float salario = 50000.75; //variable local
    char inicial = 'J';       //variable local

    printf("Edad: %d\n", edad);
    printf("Salario: %.2f\n", salario); //la forma de declarar un float es usando "%.2f"
    printf("Inicial: %c\n", inicial);
    
    return 0;
}