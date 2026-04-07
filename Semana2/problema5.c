#include <stdio.h>

int main() {
    float radioC, areaC;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radioC);
    areaC = 3.1416 * radioC * radioC;
    printf("El area del circulo es: %.2f\n", areaC);
    printf("El perimetro del circulo es: %.2f\n", 2 * 3.1416 * radioC);
    return 0;
}