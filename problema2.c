#include <stdio.h>

int main() {
    int numero1, numero2;
    printf ("Ingrese el primer numero:");
    scanf("%d", &numero1);
    printf ("Ingrese el segundo numero:");
    scanf("%d", &numero2);
    printf("La suma de %d y %d es: %d\n", numero1, numero2, numero1 + numero2);
    printf("\nLa resta de %d y %d es: %d\n", numero1, numero2, numero1 - numero2);
    printf("\nLa multiplicacion de %d y %d es: %d\n", numero1, numero2, numero1 * numero2);
    printf("\nLa division de %d y %d es: %.2f\n", numero1, numero2, (float)numero1 / numero2);
    return 0;
}