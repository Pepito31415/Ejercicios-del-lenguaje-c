//Longitud de una cadena....
#include <stdio.h>

int stringlegth(char *str) {
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0'){
        length++;
        ptr++;
    }
    return length;
}

int main() {
    char str[] = "Hola, mundo!";
    printf("La longitud de la cadena es: %d\n", stringlegth(str));
    return 0;
}