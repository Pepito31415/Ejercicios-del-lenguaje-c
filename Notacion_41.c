//Crear un proyecto con todo lo aprendido sobre estructuras.
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[10];
    char nombre[50];
    int cantidad;
    float precio;
}Producto;

Producto inventario[100];
int num_productos = 0;

void agregar_producto(char id[], char nombre[], int cantidad, float precio) 
{
    strcpy(inventario[num_productos].id, id);
    strcpy(inventario[num_productos].nombre, nombre);
    inventario[num_productos].cantidad = cantidad;
    inventario[num_productos].precio = precio;
    num_productos++;
}

void eliminar_producto(char id[]) {
    for (int i = 0; i < num_productos; i++){
        if (strcmp(inventario[i].id, id)== 0) {
            for (int j = i; j < num_productos - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            num_productos--;
            break;
        }
    }
}

void actualizar_producto(char id[], int cantidad, float precio) {
    for (int i = 0; i < num_productos; i++){
        if (strcmp(inventario[i].id, id)== 0){
            inventario[i].cantidad = cantidad;
            inventario[i].precio = precio;
            break;
        }
    }
}

void mostrar_inventario() {
    for (int i = 0; i < num_productos; i++) {
        printf("ID: %s, Nombre: %s, Cantidad: %d, Precio: %.2fn", inventario[i].id, inventario[i].nombre, inventario[i].cantidad, inventario->precio);
    }
}
int main() {
    int opcion;
    char id[10], nombre[50];
    int cantidad;
    float precio;

    while (1)
    {
        printf("\n. Agregar Producto\n2. Eliminar Produtco\n3. Actalizar Producto\n4. Mostrar Inventario\n5. salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("ID: ");
            scanf("%s", id);
            printf("Nombre: ");
            scanf("%s", nombre);
            printf("Cantidad: ");
            scanf("%f", &precio);
            agregar_producto(id, nombre, cantidad, precio);
            break;
        case 2:
            printf("ID del producto a eliminar: ");
            scanf("%s", id);
            eliminar_producto(id);
            break;
        case 3:
            printf("ID del producto a actualizar: ");
            scanf("%s", id);
            printf("Nueva cantidad: ");
            scanf("%d", &cantidad);
            printf("Nuevo precio: ");
            scanf("%f", &precio);
            actualizar_producto(id, cantidad, precio);

            break;
        case 4:
            mostrar_inventario();
            break;
        case 5:
            return 0;
        default:
            printf("Opcion no valida\n");
        }
    }
    
}