int main() {
    int suma = 0;
    int num;
    printf("Ingrese un numero mientras no sea 0: ");
    scanf("%d", &num);
    while (num != 0) {
        suma += num;
        printf("Ingrese un numero mientras no sea 0: ");
        scanf("%d", &num);
    }
    printf("La suma de los numeros ingresados es: %d\n", suma);
}