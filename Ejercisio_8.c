#include <stdio.h>

void ordenadorBurbuja(int arr[], int n) {
    for (int i = 0; i < n -1; i++) {
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Introduce el numero de elementos: ");
    scanf("%d", &n);

    int arr[n];
    printf("Introduce los elemntos del array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ordenadorBurbuja(arr, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}