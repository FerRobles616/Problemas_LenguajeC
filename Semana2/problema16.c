#include <stdio.h>

int main() {
    printf("Ingrese la nota de la primera parcial:");
    float nota1;
    scanf("%f", &nota1);
    printf("Ingrese la nota de la segunda parcial:");
    float nota2;
    scanf("%f", &nota2);
    printf("Ingrese la nota de la tercera parcial:");
    float nota3;
    scanf("%f", &nota3);
    float promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 60) {
       printf("Promedio: %.2f - Aprobado\n", promedio);
    } 
    else if (promedio >= 40 && promedio < 60) {
        printf("Promedio: %.2f - Recuperacion\n", promedio);
    }
    else {
        printf("Promedio: %.2f - Reprobado\n", promedio);
    }
    return 0;
}