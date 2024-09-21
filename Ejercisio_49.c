//Ordenamiento de un Arreglo
#include <stdio.h>

void ordenar(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min_idx = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    ordenar(arr, n);
    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}