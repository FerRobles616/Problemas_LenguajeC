#include <stdio.h>

int main() {
    printf("Ingerese su edad: ");
    int edad;
    scanf("%d", &edad);
    if (edad >= 18) {
        printf ("Puede obtener su licencia de conducir. \n");
    } else {
        printf ("No puede obtener su licencia de conducir. \n");
    }
    return 0;
}