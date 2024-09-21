//Contar Vocales
#include <stdio.h>

int countVowels(const char *str){
    int count =0;
    while (*str != '\0'){
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hola, mundo!";
    printf("El numero de vocale en la cadena en: %d\n", countVowels(str));
    return 0;
}