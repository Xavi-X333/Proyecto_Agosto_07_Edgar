#include <stdio.h>
int main() {
    int num1, num2, suma, resta, multi, division;
    char nombre[15];
    printf("Cual es su nombre: >");
    scanf("%s", &nombre);
    printf("Ingrese el primer numero: >");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: >");
    scanf("%d", &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    division = num1 / num2;
    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicacion: %d\n", multi);
    printf("La division es: %d\n", division);
    return 0;
}