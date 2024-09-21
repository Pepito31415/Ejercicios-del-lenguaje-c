//Control de intentos de login

#include <stdio.h>
#include <string.h>

int verificar_login(const char* password) {
    static int intentos = 0; // Variables estaticas local
    const char* password_correcto = "1234";

    if (intentos >= 3){
        printf("Numeros maximo de intentos alcanzado\n");
        return 0;
    }

    if (strcmp(password, password_correcto) == 0) {
        printf("Login exitoso.\n");
        return 1;
    } else {
        intentos++;
        printf("Password incorrecto. intenos restantes %d\n", 3 - intentos);
        return 0;
    }
}

int main() {
    verificar_login("1111");
    verificar_login("2222");
    verificar_login("3333");
    verificar_login("1234");
    return 0;
}