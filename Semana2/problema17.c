#include <stdio.h>

int main() {
    printf("Ingrese un año: ");
    int año;
    scanf("%d", &año);
    if (año % 4 == 0 && año % 100 != 0) {
        printf("El año %d es bisiesto.\n", año);
    } else {
        printf("El año %d no es bisiesto.\n", año);
    }
    return 0;
}