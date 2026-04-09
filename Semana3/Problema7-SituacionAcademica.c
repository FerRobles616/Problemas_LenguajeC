#include <stdio.h>

int main() {
    printf("Ingrese la nota de la primera evaluacion: ");
    int nota1;
    scanf("%d", &nota1);
    printf("Ingrese la nota de la segunda evaluacion: ");
    int nota2;
    scanf("%d", &nota2);
    printf("Ingrese la nota de la tercera evaluacion: ");
    int nota3;
    scanf("%d", &nota3);
    int promedio = (nota1 + nota2 + nota3) / 3;
    if (nota1 < 0 || nota1 > 100 || nota2 < 0 || nota2 > 100 || nota3 < 0 || nota3 > 100) {
        printf("Nota no valida, ingrese una nota entre 0 y 100.\n");
    } else if (promedio >= 90) {
        printf("Situacion academica: Excelente. \n");
    } else if (promedio >= 80) {
        printf("Situacion academica: Muy bueno. \n");
    } else if (promedio >= 70) {
        printf("Situacion academica: Bueno. \n");
    } else if (promedio >= 60) {
        printf("Situacion academica: Regular. \n");
    } else {
        printf("Situacion academica: Reprobado. \n");
    }
    return 0;
}