//El procesador...
#include <stdio.h>

#define LIMITE 100

#define HOLA

int main(int argc, char** argv)
{
    printf("El limite es %d\n", LIMITE);
#undef LIMITE
#define LIMITE 120
    printf("El limite es %d\n", LIMITE);
    printf("Hola\n");
    return 0;
}