#include <stdio.h>

int main() {
    printf("Ingrese el año: ");
    int año;
    scanf("%d", &año);
    if (año % 4 == 0 && año % 100 !=0 || año % 400 == 0) {
        printf("El año es bisiesto. \n");
    } else {
        printf("El año no es bisiesto. \n");
    }
    return 0;
}