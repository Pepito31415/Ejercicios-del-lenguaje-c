//Registro de estudiantes
#include <stdio.h>

struct  Estudiante
{
    char nombre[50];
    int matricula;
    float promedio;
};

int main() {
    struct Estudiante estudiantes[5];
    int mejorIndice = 0;

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i +1);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese la matricula del estudiante %d: ", i + 1);
        scanf("%d", &estudiantes[i].matricula);
        printf("Ingrese el promedio del estudiante %d: ", i+ 1);
        scanf("%f", &estudiantes[i].promedio);

        if (estudiantes[i]. promedio > estudiantes[mejorIndice].promedio) {
            mejorIndice = i;
        }
    }

    printf("\nEl estudiante con el mejor promedio es %s con un promedio de %.2f\n",
    estudiantes[mejorIndice].nombre,
    estudiantes[mejorIndice].promedio);

    return 0;
}
