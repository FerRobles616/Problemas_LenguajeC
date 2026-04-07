#include <stdio.h>

const float IVA = 1.16;
int main() {
    int precioP;
    printf("Ingrese el precio del producto: ");
    scanf("%d", &precioP);
    printf("El precio del producto con IVA incluido es: %.2f\n", precioP * IVA);
    return 0;
}