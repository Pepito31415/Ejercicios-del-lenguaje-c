//Preprocesador

#include <stdio.h>

#define LIMIT 80

#define PREMIUN

int main(){
#if LIMITE < 50
    printf("Limite debajo del 50\n");
#else 
    printf("Limite por encima de 50\n");
#endif
    return 0;
}
