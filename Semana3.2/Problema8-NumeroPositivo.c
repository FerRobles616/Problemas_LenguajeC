#include <stdio.h>
int main() {
    int num;
    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Error: El número debe ser positivo.\n");
        }
    } while (num <= 0);
    printf("Número válido ingresado: %d\n", num);
    return 0;
}