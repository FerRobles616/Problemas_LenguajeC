#include <stdio.h>
/* Escribe un programa en C que muestre un menú con 3 opciones (1=Saludar,
2=Mostrar fecha, 3=Salir) y se repita hasta que el usuario elija salir. Usar un bucle
do-while y switch-case.*/
int main() {
    int opcion;
    do {
        printf("Menu:\n");
        printf("1. Saludar\n");
        printf("2. Mostar fecha\n");
        printf("3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Hola! Bienvenido al programa. \n");
                break;
            case 2:
                printf("La fecha de hoy es: 20 de junio de 2024. \n");
                break;
            case 3:
                printf("Saliendo del programa. \n");
                break;
            default:
                printf("Opcion no valida, ingrese una opcion entre 1 y 3.\n");
        }
    } while (opcion != 3);
    return 0;
}