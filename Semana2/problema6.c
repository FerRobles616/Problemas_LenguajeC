#include <stdio.h>

int main() {
    int distkm;
    printf("Ingrese la distancia en kilometros:");
    scanf("%d", &distkm);
    printf("La distancia en metros es: %dm\n", distkm * 1000);
    printf("La distancia en centimetros es: %dcm\n", distkm * 100000);
    return 0;
}