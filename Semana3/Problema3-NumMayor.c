#include <stdio.h>

int main() {
    printf("Ingrese el primer número entero: ");
    int num1;
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero: ");
    int num2;
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("el numero mayor es: %d\n", num1);
    } else {
        printf("el numero mayor es: %d\n", num2);
    }
    return 0;
}