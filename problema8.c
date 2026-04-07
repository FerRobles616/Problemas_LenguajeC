#include <stdio.h>

int main () {
    int nument;
    printf ("Ingrese un numero entero:");
    scanf("%d", &nument);
    if (nument % 2 == 0) {
        printf("El numero %d es par\n", nument);
    } else {
        printf("El numero %d es impar\n", nument);
    }
    return 0;
}