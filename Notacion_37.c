//Estructura condicional-------
#include <stdio.h>

int main() {
    int puntuacion;

    //solicitar la puntuacion al usuario
    printf("Introduce tu puntuacion (0 - 100): ");
    scanf("%d", &puntuacion);

    //Validar la puntuacion ingrasada
    if (puntuacion < 0 || puntuacion > 100) {
        printf("Puntuacion invalida. Debe estar entre 0 y 100. \n");
    }else {
        //Determinar la letra de la calificacion usando if-else if-else
        if (puntuacion >= 90) {
            printf("Tu calificacion es: A\n");
        }else if (puntuacion >= 80) {
            printf("Tu calificacion es: B\n");
        }else if(puntuacion >= 70){
            printf("Tu calificacion es: C\n");
        }else if(puntuacion >= 60){
            printf("Tu calificacion es: D\n");
        }else{
            printf("Tu calificacion es: F\n");
        }
        //Usar switch para dar un mensaje adicional basado en la calificacion
        switch (puntuacion / 10)
        {
        case 10:
        case 9:
            printf("¡Excelente trabajo\n");
            break;
        case 8:
            printf("Buen trabajo, sige asi. \n");
            break;
        case 7:
            printf("Puedes mejorar, sige esforzandote. \n");
            break;
        case 6:
            printf("Necesitas trabajar mas duro.\n");
            break;
        default:
            printf("Debes estudiar mas. \n");
        }
    }

    return 0;
}