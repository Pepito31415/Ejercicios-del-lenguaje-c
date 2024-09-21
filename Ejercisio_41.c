//Comparar Cadenas
#include <stdio.h>

int stringCompare(const char *str1, const char *str2){
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char*)str2;
}

int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";
    int result = stringCompare(str1, str2);
    if (result == 0){
        printf("Las cadenas son iguales.\n");
    }else if (result < 0) {
        printf("La primera cadena es menor.\n");
    }else{
        printf("La primera cadena es mayor.\n");
    }
    return 0;
}