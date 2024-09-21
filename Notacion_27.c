//estructuras
#include <stdio.h>
#include <cstring>

//Definicion de una estructura
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    //Declaracion de una variable de tipo struct Persona
    struct Persona persona1;
    //Asignacion de valores a los miembros de la estructura
    strcpy(persona1.nombre, "juan");
    persona1.edad = 30;
    persona1.altura = 1.75;

    //Acceso a los miembros de la estructuras
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f\n", persona1.altura);

    return 0;
}