#include <stdio.h>

int main() {
    printf("Ingrese el dividendo:");
    int dividendo;
    scanf("%d", &dividendo);
    printf("Ingrese el divisor:");
    int divisor;
    scanf("%d", &divisor);
    int  divisionentera = dividendo / divisor;
    float divisonreal = (float)dividendo / divisor;
    int residuo = dividendo % divisor;
    printf("La division entera es: %d\n", divisionentera);
    printf("La division real es: %.2f\n", divisonreal);
    printf("El residuo es: %d\n", residuo);
    return 0;
}