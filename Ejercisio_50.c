//Fibonacci Optimizado
#include <stdio.h>

int fibonacci(int n, int memo[]) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fibonacci(n-1, memo) + fibonacci(n-2, memo);
    return memo[n];
}

int main() {
    int n = 10;
    int memo[n+1];
    for (int i = 0; i <= n; i++) memo[i] = -1;
    printf("Elk %d-esimo numero de Fibonacci es: %d\n", n, fibonacci(n, memo));
    return 0;
}