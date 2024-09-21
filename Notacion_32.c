#include <stdlib.h>
int main() {
    int *ptr = (int *)malloc(sizeof(int)* 10); // Asignar memoria

    if (ptr != NULL){
        //Uso de la memoria
        free(ptr);//Liberar memoria
        ptr = NULL; //Evitar dobles liberaciones
    }
    return 0;
}