#include <stdio.h>

int main() {
    printf("Ingrese la cantidad de alumnos: ");
    int N;
    scanf("%d", &N);
    int suma = 0;
    for (int i = 0; i < N; i++) {
        printf("Ingrese la nota del alumno #%d: ", i + 1);
        int nota;
        scanf("%d", &nota);
        if (nota < 0 || nota > 100) {
            printf("Nota no valida, ingrese una nota entre 0 y 100.\n");
            return 1;
        }
        suma += nota;
    }   
    printf("La suma de las notas es: %d\n", suma);
    printf("El promedio de las notas es: %.2f\n", (float)suma / N);
    return 0;
}