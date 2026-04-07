/*Escribe un programa en C que lea la inicial del nombre, la edad y la estatura en
metros de una persona, y muestre todos los datos en pantalla con el siguiente
formato: “Inicial: L *** Edad: 25 años *** Estatura: 1.75 m”*/

#include <stdio.h>

int main() {
    char inicial;
    int edad;
    float estatura;  
    printf("Ingrese la inicial del nombre: ");
    scanf("%c", &inicial);
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    printf("Ingrese la estatura en metros: ");
    scanf("%f", &estatura);
    printf("Inicial: %c *** Edad: %d años *** Estatura: %.2f m\n", inicial, edad, estatura);
    return 0;
}