//Año bisiaesto.
#include <stdio.h>

int main() {
    int year;
    printf("Introduce un año: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("El año bisiesto.\n");
    }else{
        printf("El año no es bisiesto.\n");
    }
    return 0;
}