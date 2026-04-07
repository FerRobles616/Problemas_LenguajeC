#include <stdio.h>

int main() {
    printf("Ingrese su edad: ");
    int edad;
    scanf("%d", &edad);
    if (edad >= 0 && edad <=12) {
        printf("Categoria: Niño\n");
    }
    else if (edad >= 13 && edad <=17) {
        printf("Categoria: Adolescente\n");
    }
    else if (edad >= 18 && edad <=64) {
        printf("Categoria: Adulto\n");
    }
    else if (edad >= 65) {
        printf("Categoria: Adulto Mayor\n");
    }
    return 0;
}