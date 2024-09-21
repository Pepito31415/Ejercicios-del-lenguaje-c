//Corversion de temperatura
#include <stdio.h>

const float FACTOR_CONVERSION = 9.0 / 5.0; //Constante con tipo

int main() {
    float celsius, farenheit;
    printf("Introduce la temperatura en grados Celcius:");
    scanf("%f", &celsius);
    farenheit = celsius * FACTOR_CONVERSION + 32;
    printf("La temperatura en grados Farenheit es: %.2f\n", farenheit);
    return 0;
}