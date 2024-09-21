//Bliblioteca dew libros
#include <stdio.h>

struct Libro {
    char titulo[100];
    char autor[50];
    int anio;
};

int main() {
    struct Libro libros[4];
    int masAntiguoIndice = 0;

    for (int i = 0; i < 4; i++) {
        printf("Ingrese el titulo del libro %d: ", i + 1);
        scanf(" %[^\n]", libros[i].titulo);

        printf("Ingrese el autor del libro %d: ", i + 1);
        scanf(" %[^\n]", libros[i].autor);

        printf("Ingrese el año de publicacion del libro %d: ", i + 1);
        scanf("%d", &libros[i].anio);

        if (libros[i].anio < libros[masAntiguoIndice].anio) {
            masAntiguoIndice = i;
        }
    }

    printf("\nEl libro mas antiguo es '%s' de %s, publicado en %d\n", libros[masAntiguoIndice].titulo,
    libros[masAntiguoIndice].autor,
    libros[masAntiguoIndice].anio);

    return 0;
}