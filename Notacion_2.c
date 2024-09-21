#include <stdio.h>

void imprimir_dia(int numero_de_dia){
    switch (numero_de_dia){
        case  1:
        printf("Lunes");
        break;
        case  2:
        printf("Martes");
        break;
        case  3:
        printf("Miercoles");
        break;
        case  4:
        printf("jueves");
        break;
        case  5:
        printf("Viernes");
        break;
        case  6:
        printf("Sabado");
        break;
        case  7:
        printf("Domingo");
        break;
        default:
        printf("No es un diade la semana");
        break;
        }
    }


int main()
{
    imprimir_dia(-1);
    printf("\nEsto se ejecuta siempre");
    return 0;
}