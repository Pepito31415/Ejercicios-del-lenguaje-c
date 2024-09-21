//Descuento de una compra
#include <stdio.h>

#define DESCUENTO 0.10 //constante simbolica para el descuento (10%)

int main() {
    float precio, precio_final;
    printf("Introducir el precio del producto: ");
    scanf("%f", &precio);
    precio_final = precio *(1 - DESCUENTO);
    printf("El precio final con descuento es: %.2f\n", precio_final);
    return 0;
}