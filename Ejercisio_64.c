//Menu de opciones....
#include <stdio.h>

int main() {
    int opcion;

    do{
        printf("Menu de Opciones:\n");
        printf("1. Saludar\n");
        printf("2. Despedirse\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("¡Hola!\n");
            break;
        case 2:
            printf("¡Adios!\n");
            break;
        case 3:
            printf("Saliendo.....\n");
            break;
        default:
            printf("Opcion no valida.\n");
        }
    }while (opcion != 3);
    {
        return 0;
    }
}