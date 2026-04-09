#include <stdio.h>

int main() {
    printf("Ingrese la cantidad de numeros enteros que desea ingresar: ");
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        printf("Ingrese el numero entero #%d: ", i);
        int num;
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("El numero es par. \n");
        } else {
            printf("El numero es impar. \n");
        }
    }  
    return 0;
}