//Uniones
#include <stdio.h>

union Datos {
    int entero;
    float decimal;
    char caracter;
};

int main() {
    union Datos dato;
    dato.entero = 10;
    printf("Entero: %d\n", dato.entero);

    dato.decimal = 3.14;
    printf("Decimal: %.2f\n", dato.decimal);

    dato.caracter = 'A';
    printf("Caracter: %c\n", dato.caracter);

    return 0;
}