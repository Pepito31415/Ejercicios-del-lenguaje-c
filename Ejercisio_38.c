//Copiar una cadena
#include <stdio.h>

void string_copy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char src[] = "Hola, mundo!";
    char dest[50];
    string_copy(dest, src);
    printf("Cadena copiada: %s\n", dest);
    return 0;
}