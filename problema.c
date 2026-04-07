#include <stdio.h>

int main() {
    printf("Ingrese su salario bruto mensual: ");
    float salario;
    scanf("%f", &salario);
    float cajafis = salario * 0.19;
    float segsoc = salario * 0.055;
    float salario_neto = salario - cajafis - segsoc;
    printf("El salario neto mensual es: %.2f\n", salario_neto);
    return 0;
}