#include <stdio.h>

void stringConcat(char *dest, const char *src){
    while (*dest != '\0'){
        dest++;
    }
    while (*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[50] = "Hola, ";
    char str2[] = "mundo!";
    stringConcat(str1, str2);
    printf("cadena concatenada: %s\n", str1);
    return 0;
}