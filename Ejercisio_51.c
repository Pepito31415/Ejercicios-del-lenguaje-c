//Busqueda Binaria
#include <stdio.h>

int busquedaBinaria(int arr[], int l, int r, int x) {
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        if (arr[m] < x) l = m + 1;
        else r = m -1;
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int resultado = busquedaBinaria(arr, 0, n-1, x);
    if (resultado != -1) printf("Elemento encontrato en el indice %d\n", resultado);
    else printf("Elemento no encontrado\n");
    return 0;
}