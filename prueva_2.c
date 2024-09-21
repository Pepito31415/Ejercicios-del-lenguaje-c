#include <stdio.h>

#define DESCUENTO 0.10 // Constante simbólica para el descuento (10%)

int main() {
    float precio, precioFinal;
    printf("Introduce el precio del producto: ");
    scanf("%f", &precio);
    precioFinal = precio * (1 - DESCUENTO);
    printf("El precio final con descuento es: %.2f\n", precioFinal);
    return 0;
}
