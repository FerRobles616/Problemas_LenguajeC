#include <stdio.h>

int main () {
    float exa1, exa2, exa3;
    printf ("ingrese la calificacion del primer examen:");
    scanf("%f", &exa1);
    printf ("ingrese la calificacion del segundo examen:");
    scanf("%f", &exa2);
    printf ("ingrese la calificacion del tercer examen:");
    scanf("%f", &exa3);
    printf("El promedio de los tres examenes es: %.2f\n", (exa1 + exa2 + exa3) / 3.0);
    return 0;
}