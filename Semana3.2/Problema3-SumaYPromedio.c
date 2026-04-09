#include <stdio.h>
/* Escribe un programa en C que lea N números enteros ingresados por el usuario y
calcule la suma y el promedio de todos ellos. Usar un bucle for.*/
int main() {
    printf("Ingrese la cantidad de numeros enteros que desea ingresar: ");
    int N;
    scanf("%d", &N);
    int suma = 0;
    for (int i = 0; i < N; i++) {
        printf("Ingrese el numero entero #%d: ", i + 1);
        int num;
        scanf("%d", &num);
        suma += num;
    }   
    printf("La suma de los numeros ingresados es: %d\n", suma);
    printf("El promedio de los numeros ingresados es: %.2f\n", (float)suma / N);
    return 0;
}