//estructuras
#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
    float salario;
};

int main() {
    struct Persona persona1 = {"Juan", 30, 50000.50};

    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Salario: %.2f\n", persona1.salario);

    return 0;
}