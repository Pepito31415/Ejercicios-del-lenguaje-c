//Creacion de un programa con todo lo aprendido.
#include <stdio.h>

//varibles globales
int globales_var1 = 10;
float global_var2 = 20.5;

//Funcion para sumar dos numeros
inline int sumar(int a, int b) {
    //Variable local
    int resultado = a + b;
    return resultado;
}

//Funciion para multiplicar dos numeros
inline float multiplicar(float a, float b) {
    //Variable local
    float resultado = a * b;
    return resultado;
}

int main() {
    //Variables locales
    int local_var1 = 5;
    float local_var2 = 3.5;
    int resultado_suma;
    float resultado_multiplicacion;

    // Uso de operadores aritmeticos
    resultado_suma = sumar(local_var1, globales_var1);
    resultado_multiplicacion = multiplicar(local_var2, global_var2);

    //Uso de operadores logicos y estructuras de control
    if (resultado_suma > 20 && resultado_multiplicacion < 10) {
        printf("La suma maypr que 20 y la multiplicacion es menor que 100.\n");
    } else if (resultado_suma <= 20 || resultado_multiplicacion >= 100) {
        printf("La suma es menor  o igual a 20 o la multiplicacion es mayor o igual a 100.\n");
    }else {
        printf("Ninguna de las condiciones anteriores se cumple. \n");
    }

    //Uso de bucles
    for (int i = 0; i < 5;i++) {
        printf("Iteracion %d: Suma = %d, Multiplicacion = %.2f\n", i, resultado_suma, resultado_multiplicacion);
    }

    return 0;
}