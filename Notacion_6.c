//Arraysy VLAs.

#include <stdio.h>

float media(int* edades, int tam){
    int i;
    float acum = 0;
    for (i = 0; i < tam; i++){
        acum += edades[i];
    }
    return acum / tam;
}

int main(){
    int tam;
    printf("Cuantos elementos vas a meter? ");
    scanf("%d", &tam);
    int i, edades[tam];
    for (i = 0; i < tam; i++){
        printf("introduce la edad %d: ", i+1);
        scanf("%d", &edades[i]);
    }
    for (i = 0; i < tam; i++){
        printf("edades[%d] = %d\n", i, edades[i]);
    }
    printf("la edad media es %f.", media(edades, tam));
    return 0;
}