#include <stdio.h>

int main() {
    int num = 0, secreto = 42, distancia;
    while (num != secreto) {
        printf("Adivina (1-100): ");
        scanf("%d", &num);
        if (num != secreto) {
            distancia = num - secreto;
            if (distancia < 0) distancia = -distancia;
            if (distancia <= 10) printf("Caliente\n");
            else printf("Frio\n");
        }
    }
    printf("¡Ganaste!\n");
    return 0;
}