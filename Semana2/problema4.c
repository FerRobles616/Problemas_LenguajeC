#include <stdio.h>

const float PAGO_HORA = 15.0;
int main() {
    int cantidadHoras;
    float salario;
    printf("Ingrese la cantidad de horas trabajadas:");
    scanf("%d", &cantidadHoras);
    salario = cantidadHoras * PAGO_HORA;
    printf("El salario total es: %.2f\n", salario);
    return 0;
}