//Area de un circulo
#include <stdio.h>
#define PI 3.14159 //Constante sinbolica

int main() {
    float radio, area;
    printf("introduce el radio del circulo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El area del circulo es: %.2f\n", area);
    return 0;
}