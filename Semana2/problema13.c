#include <stdio.h>

int main() {
    printf ("Ingrese el primer numero: ");
    int num1;
    scanf("%d", &num1);
    printf ("Ingrese el segundo numero: ");
    int num2;
    scanf("%d", &num2);
    printf ("El valor de num1 antes: %d\n", num1);
    printf ("El valor de num2 antes: %d\n", num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf ("El valor de num1 despues: %d\n", num1);
    printf ("El valor de num2 despues: %d\n", num2);
    return 0;
}