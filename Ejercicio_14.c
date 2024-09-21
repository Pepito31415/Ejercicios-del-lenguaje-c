//Uso de variables locales y globales en calculos.
#include <stdio.h>

//Variable global
const float PI= 3.14159;

int main(){
    // Variables locales
    float radio = 5.0;
    float area = PI * radio * radio;
    printf("El area de un circulo con radio %.2f es: %.2f\n", radio, area);
    return 0;
}