//Estructuras
#include <stdio.h>

struct Libro {
    char titulo[50];
    char autor[50];
    int anio;
};

int main() {
    struct Libro libro1 = {"Cien años de soledad", "Gabriel Garcia Marquez", 1967};

    printf("Titulo: %s\n", libro1.titulo);
    printf("Autos: %s\n", libro1.autor);
    printf("Año: %d\n", libro1.anio);

    return 0;
}