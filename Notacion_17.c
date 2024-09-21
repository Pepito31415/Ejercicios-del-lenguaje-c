//estructuras.
#include <stdio.h>

struct  Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct  Persona persona1 = {"Juan", 30, 1.75};

    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f\n", persona1.altura);

    return 0;
}