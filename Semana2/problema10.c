/*Escribe un programa en C que lea un monto en guaraníes y determine cuántos
billetes de cada denominación se necesitan para completar dicho monto.*/

#include <stdio.h>

int main() {
    printf("Ingrese el monto en guaranies: ");
    int monto;
    scanf("%d", &monto);
    int billetes100k = monto / 100000;
    monto %= 100000;
    int billetes50k = monto / 50000;
    monto %= 50000;
    int billetes20k = monto / 20000;
    monto %= 20000;
    int billetes10k = monto / 10000;
    monto %= 10000;
    int billetes5k = monto / 5000;
    monto %= 5000;
    int billetes2k = monto / 2000;
    monto %= 2000;
    int billetes1k = monto / 1000;
    
    printf("Billetes de 100.000 Gs: %d\n", billetes100k);
    printf("Billetes de 50.000 Gs: %d\n", billetes50k);
    printf("Billetes de 20.000 Gs: %d\n", billetes20k);
    printf("Billetes de 10.000 Gs: %d\n", billetes10k);
    printf("Billetes de 5.000 Gs: %d\n", billetes5k);
    printf("Billetes de 2.000 Gs: %d\n", billetes2k);
    printf("Billetes de 1.000 Gs: %d\n", billetes1k);
    return 0;
}