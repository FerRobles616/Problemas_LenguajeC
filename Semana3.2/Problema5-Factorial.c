#include <stdio.h>

int main() {
    printf("Ingrese un número entero: ");
    int numero;
    scanf("%d", &numero);
    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos. \n");
    } else {
        long long factorial = 1;
        for (int i = 1; i <= numero; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %lld\n", numero, (long long)factorial);
    }
    return 0;
}