//informacion de empleados.
#include <stdio.h>

struct  Empleado
{
    char nombre[50];
    int edad;
    float salario;
};

int main() {
    struct Empleado empleados[3];
    for (int i = 0; i < 3; i++) {
        printf("Ingrese el nombre del empleado %d: ", i + 1);
        scanf("%s", empleados[i].nombre);
        printf("Ingrese la edad del empleado %d: ", i + 1);

        scanf("%d", empleados[i].edad);
        printf("Ingrese la edad del empleado %d: ", i + 1);
        scanf("%f", &empleados[i].salario);
    }
    for (int i = 0; i < 3; i++) {
        printf("\nEmpleado %d:\n", i + 1);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Edad: %s\n", empleados[i].edad);
        printf("Salario: %s\n", empleados[i].salario);
    }

    return 0;
}