#include <stdio.h>

int main() {
    printf("Ingrese la nota final: ");
    int nota;
    scanf("%d", &nota);
    if (nota < 0 || nota > 100) {
        printf("Nota no valida, ingrese una nota entre 0 y 100.\n");
    } else if (nota >=60) {
        printf("Aprobado. \n");        
    } else {
        printf("Reprobado. \n");
    }
    return 0;
}