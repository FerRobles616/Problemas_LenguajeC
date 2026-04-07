/* Escribe un programa en C que lea un número entero entre 100 y 999 y
extraiga por separado la centena, la decena y la unidad. */
#include <stdio.h>

int main() {
    printf("Ingrese un numero entre 100 y 999: ");
    int numero;
    scanf("%d", &numero);
    int centena = numero /100;
    int decena = (numero % 100) / 10;
    int unidad = numero % 10;
    printf("Centena: %d\n", centena);
    printf("Decena: %d\n", decena);
    printf("Unidad: %d\n", unidad);
    return 0;
}