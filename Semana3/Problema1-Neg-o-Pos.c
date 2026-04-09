/*Escribe un programa en C que lea un número entero y determine si es positivo,
negativo o cero. Mostrar el mensaje correspondiente.*/

#include <stdio.h>

int main() {
    printf("Ingrese un número entero: ");
    int numero;
    scanf("%d", &numero);
    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }
    return 0;
}