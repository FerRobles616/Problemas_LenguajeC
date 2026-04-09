#include <stdio.h>

int main() {
    printf("Ingrese un numero: ");
    int num1;
    scanf("%d", &num1);
    if (num1 % 2 == 0) {
        printf("El numero es par. \n");
    } else {
        printf("EL numero es impar. \n");
    }
}