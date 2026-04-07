#include <stdio.h>

int main() {
    printf("Ingrese el primer numero: ");
    int num1;
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    int num2;
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("El numero mayor es: %d\n", num1);
    } else if (num2 > num1) {
        printf("El numero mayor es: %d\n", num2);
    } else {
        printf("Ambos numeros son iguales: %d\n", num1);
    }  
    return 0;
}