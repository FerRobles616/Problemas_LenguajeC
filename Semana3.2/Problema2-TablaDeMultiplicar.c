#include <stdio.h>

int main() {
    printf("Ingrese un numero entero: ");
    int num;
    scanf("%d", &num);
    printf("Tabla de multiplicar del %d: \n", num);
    for (int i = 1; i <=10; i++) {
        printf("%d x %d = %d \n", num, i, num * i);
    }
    return 0;
}