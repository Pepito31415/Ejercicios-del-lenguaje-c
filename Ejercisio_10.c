#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100
#define MAX_NOMBRE 50

typedef struct {
    char nombre[MAX_NOMBRE];
    float calificacion;
} Estudiante;

void agregarEstudiante(Estudiante estudiantes[], int *numEstudiantes) {
    if  (*numEstudiantes >= MAX_ESTUDIANTES) {
        printf("No se pueden agregar mas estudiantes.\n");
        return;
    }
    printf("Introduce el nombre del estudiante: ");
    scanf("%s", estudiantes[*numEstudiantes].nombre);
    printf("Introduce la calificacion del estudiante: ");
    scanf("%f", &estudiantes[*numEstudiantes].calificacion);
    (*numEstudiantes)++;
}

void eliminarEstudiante(Estudiante estudiantes[], int *numEstudiantes) {
    char nombre[MAX_NOMBRE];
    printf("Introduce el nombre del estudiante a eliminar: ");
    scanf("%s", nombre);
    for (int i = 0; i < *numEstudiantes; i++) {
        if (strcmp(estudiantes[i].nombre, nombre) == 0){
            for (int j = i; j < *numEstudiantes - 1; j++) {
                estudiantes[j] = estudiantes[j + 1];
            }
            (*numEstudiantes)--;
            printf("Estudiante eliminado.\n");
            return;
        }
    }
    printf("Estudiante no nencontrado.\n");
}

void mostrarEstudiantes(Estudiante estudiantes[], int numEstudiantes) {
    printf("lista de estudiantes:\n");
    for (int i =0; i < numEstudiantes; i++) {
        printf("Nombre: %s, calificacion: %.2f\n", estudiantes[i].nombre, estudiantes[i].calificacion);
    }
}

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int numEstudiantes = 0;
    int opcion;

    do {
        printf("1. Agregar estudiente\n");
        printf("2. Eliminar estudiante\n");
        printf("3. Mostrar estudiantes\n");
        printf("4. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion){
            case 1:
                agregarEstudiante(estudiantes, &numEstudiantes);
                break;
            case 2:
                eliminarEstudiante(estudiantes, &numEstudiantes);
                break;
            case 3:
                mostrarEstudiantes(estudiantes, numEstudiantes);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion !=4);
    return 0;
}