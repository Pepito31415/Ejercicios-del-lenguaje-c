//Calificacion de estudiantes:
#include <stdio.h>

int main() {
    int calificacion;
    printf("Introduce la calificacion (0-100): ");
    scanf("%d", &calificacion);

    if (calificacion >= 60) {
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }

    return 0;
}