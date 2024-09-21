#include <stdio.h>

const int CALIFICACION_MINIMA = 60; //Constante con tipo

int main(){
    int calificacion;
    printf("Introduce la calificacion del examen: ");
    scanf("%d", &calificacion);
    if (calificacion >= CALIFICACION_MINIMA){
        printf("El estudiante ha aprobado.\n");
    }else{
        printf("El estudiante ha reprovado.\n");
    }
    return 0;
}