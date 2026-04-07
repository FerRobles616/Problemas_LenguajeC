#include <stdio.h>

int main () {
    int segundos;
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segs = segundos % 60;
    printf("%d segundos equivalen a %d horas, %d minutos y %d segundos\n", segundos, horas, minutos, segs);
    return 0;
}