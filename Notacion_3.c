//operadores aritmecicos, logicos y de comparacion.
#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    int division = b / a;
    int modulo = b % a;
    int es_igual = (a == b);
    int es_mayor = (a > b);
    int es_menor = (a < b);
    int y_Logico = (a < b) && (b > a);
    int o_Logico = (a < b) || (b > a);
    int no_Logico = !(a == b);

printf("Suma: %d\n", suma);
printf("Resta: %d\n", resta);
printf("Multiplicacion: %d\n", multiplicacion);
printf("Division: %d\n", division);
printf("Modulo: %d\n", modulo);
printf("Es igual %d\n", es_igual);
printf("Es mayor %d\n", es_mayor);
printf("Es menor %d\n", es_menor);
printf("AND logico: %d\n", y_Logico);
printf("OR logico: %d\n", o_Logico);
printf("NOT logico: %d\n", no_Logico);

return 0;
}