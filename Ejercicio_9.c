#include <stdio.h>

#define SIZE 3

void leerMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Introduce el elemento [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrices(int matriz1[SIZE][SIZE], int matriz2[SIZE][SIZE], int resultado[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[SIZE][SIZE], matriz2[SIZE][SIZE], resultado[SIZE][SIZE];

    printf("Introduce los elementos de la primera matriz.\n");
    leerMatriz(matriz1);

    printf("Introduce los elementos de la segunda matriz:\n");
    leerMatriz(matriz2);

    multiplicarMatrices(matriz1, matriz2, resultado);

    printf("La matriz resultado es:\n");
    imprimirMatriz(resultado);

    return 0;
}