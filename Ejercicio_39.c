#include <stdio.h>

int findMax(int *arr, int size){
    int max = *arr;
    for (int i = 1; i < size; i++){
        if (*(arr + i) > max){
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("El valor maximo en el array es: %d\n", findMax(arr, size));
    return 0;
}