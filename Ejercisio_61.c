//Encotrar numeros pares entre 1 y 50 usando un bucle for:
#include <stdio.h>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}