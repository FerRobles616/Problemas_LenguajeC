#include <stdio.h>

int main() {
    printf("Ingrese la edad: ");
    int edad;
    scanf("%d", &edad);
    if (edad <= 0 || edad > 120) {
        printf("Edad no valida, ingrese una edad entre 0 y 120. \n");
    } else if (edad <= 11) {
        printf("Es niño, abonar 15000 G");
    } else if (edad <= 17) {
        printf("Es adolescente, abonar 25000 G");
    } else if (edad <= 18) {
        printf("Es adulto, abonar 35000 G");
    } else {
        printf("Es adulto mayor, abonar 20000 G");
    }
    return 0;
}